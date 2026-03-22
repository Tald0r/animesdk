#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E7140F4786C00178.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_581B880F1146BE79;

#define CLASS_2_8FE6436FFADDBCF8_METHOD_2_40BEAD28720EA361_OFFSET UNITYSDK_OFFSET(0x16EAA7C0)
#define CLASS_2_8FE6436FFADDBCF8_METHOD_2_A869A2D944B4A769_OFFSET UNITYSDK_OFFSET(0x16EAA9E0)
#define CLASS_2_8FE6436FFADDBCF8__CTOR_OFFSET UNITYSDK_OFFSET(0x16EAA750)

inline static constexpr unsigned int Class_2_8FE6436FFADDBCF8_TypeDefinitionIndex = 75540;

class Class_2_8FE6436FFADDBCF8 : public ::Class_1_E7140F4786C00178
{
public:
	::System::Void _ctor(::Class_2_581B880F1146BE79* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_581B880F1146BE79*))((::PBYTE)hIl2Cpp + CLASS_2_8FE6436FFADDBCF8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_40BEAD28720EA361(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_8FE6436FFADDBCF8_METHOD_2_40BEAD28720EA361_OFFSET))(this, a1);
	}

	::System::Void Method_2_A869A2D944B4A769(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_8FE6436FFADDBCF8_METHOD_2_A869A2D944B4A769_OFFSET))(this, a1);
	}
};
