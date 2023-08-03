// PimpUser example - User class private header
// Created by Pascal JEAN aka epsilonRT, August 2023
// This example shows how to use the PimpUser class
// This example is compatible with PlatformIO for native platform, and is in the public domain

#pragma once
#include <pimp_p.h>
#include "user.h"

// Private implementation of User class
// This class is not exported and is only used by User class
// It is derived from PimpClass::Private to allow access to the API class with PIMP_Q() macro
class User::Private : public PimpClass::Private {
  public:
    // Constructor call by User class for creating the private implementation
    Private (User *q);
    // Checks the parent access from the private implementation
    bool checkParentAccess() const;
    // Private attributes
    std::string name;
    int age;
    // Declare q_func() macro for API class access
    PIMP_DECLARE_PUBLIC (User)
};