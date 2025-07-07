#ifndef SHA256_H
#define SHA256_H

#include <string>

// Simple SHA-256 implementation for password hashing
class SHA256 {
private:
    typedef unsigned char uchar;
    typedef unsigned int uint;
    typedef unsigned long long ullong;

    const static uint k[64];
    static uint rotr(uint x, uint n);
    static uint choose(uint e, uint f, uint g);
    static uint majority(uint a, uint b, uint c);
    static uint sig0(uint x);
    static uint sig1(uint x);

public:
    static std::string hash(const std::string& input);
};

#endif // SHA256_H