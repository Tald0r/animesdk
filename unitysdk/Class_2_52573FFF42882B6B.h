#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9E31DBDCCF0E950.h"
#include "unitysdk/Struct_2_D7E802D2192B688B.h"

#define CLASS_2_52573FFF42882B6B_METHOD_2_E208223D910B296E_OFFSET UNITYSDK_OFFSET(0x9F84220)
#define CLASS_2_52573FFF42882B6B__CTOR_OFFSET UNITYSDK_OFFSET(0x9F84430)

inline static constexpr unsigned int Class_2_52573FFF42882B6B_TypeDefinitionIndex = 39040;

class Class_2_52573FFF42882B6B : public ::Class_1_D9E31DBDCCF0E950
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52573FFF42882B6B__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_E208223D910B296E(::Struct_2_D7E802D2192B688B& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_D7E802D2192B688B&))((::PBYTE)hIl2Cpp + CLASS_2_52573FFF42882B6B_METHOD_2_E208223D910B296E_OFFSET))(this, a1);
	}
};
