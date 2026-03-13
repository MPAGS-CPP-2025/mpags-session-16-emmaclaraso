#ifndef CIPHERFACTORY_HPP
#define CIPHERFACTORY_HPP

#include "Cipher.hpp"
#include "CipherType.hpp"
#include <memory>

/**
 * \file CipherFactory.hpp
 * \brief Contains the declaration of the CipherFactory factory function
 */

/**
 * \namespace CipherFactory
 * \brief Used to create cipher objects
 */


namespace CipherFactory {
        std::unique_ptr<Cipher> makeCipher(const CipherType type, const std::string& key);
}

#endif // VEHICLEFACTORY_HPP