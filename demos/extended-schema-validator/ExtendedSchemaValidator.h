//-----------------------------------------------------------------------
// Copyright 2011 Ciaran McHale.
//
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions.
//
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.  
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
// BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
// ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//----------------------------------------------------------------------

#ifndef EXTENDED_SCHEMA_VALIDATOR_H_
#define EXTENDED_SCHEMA_VALIDATOR_H_


#include <config4cpp/SchemaValidator.h>
#include "SchemaTypeHex.h"
using CONFIG4CPP_NAMESPACE::ConfigurationException;
using CONFIG4CPP_NAMESPACE::SchemaValidator;

#if __cplusplus < 201703L
#define CONFIG_THROW_EXPRESSION throw(ConfigurationException) = 0
#define CONFIG_THROW_EXPRESSION_IMPL throw(ConfigurationException)
#else
#define CONFIG_THROW_EXPRESSION
#define CONFIG_THROW_EXPRESSION_IMPL
#endif


class ExtendedSchemaValidator : public SchemaValidator
{
public:
	ExtendedSchemaValidator() CONFIG_THROW_EXPRESSION_IMPL
	{
		registerType(new SchemaTypeHex());
	}

protected:
};

#endif
