#include "CipherFactory.hpp"
#include "CaesarCipher.hpp"
#include "PlayfairCipher.hpp"
#include "VigenereCipher.hpp"

#include <memory>

enum class CipherType {
    Caesar,      ///< The Caesar cipher
    Playfair,    ///< The Playfair cipher
    Vigenere     ///< The Vigenere cipher
};

std::unique_ptr<Cipher> CipherFactory::makeCipher(const CipherType type,const std::string& key){
    switch (type) {
        case CipherType::Caesar:
            return std::make_unique<CaesarCipher>(key);
        case CipherType::Playfair:
            return std::make_unique<PlayfairCipher>(key);
        case CipherType::Vigenere:
            return std::make_unique<VigenereCipher>(key);
    }
    
}