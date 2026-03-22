#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_34.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_F356FCA60006484C;
namespace System { class Object; }

#define CLASS_2_327ACE1195A145BB_1_METHOD_2_111CDC825FE22C10_OFFSET UNITYSDK_OFFSET(0x7F667B0)
#define CLASS_2_327ACE1195A145BB_1_METHOD_2_2EC1AB2AD2FCAF69_OFFSET UNITYSDK_OFFSET(0x7F66CF0)
#define CLASS_2_327ACE1195A145BB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x7F66CE0)

inline static constexpr unsigned int Class_2_327ACE1195A145BB_1_TypeDefinitionIndex = 75450;

class Class_2_327ACE1195A145BB_1 : public ::Class_1_43BD383C98B4C0C5_34
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_327ACE1195A145BB_1__CTOR_OFFSET))(this);
	}

	::Class_1_F356FCA60006484C* Method_2_111CDC825FE22C10(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::Class_1_F356FCA60006484C*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_327ACE1195A145BB_1_METHOD_2_111CDC825FE22C10_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_2EC1AB2AD2FCAF69(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_327ACE1195A145BB_1_METHOD_2_2EC1AB2AD2FCAF69_OFFSET))(this, a1, a2);
	}
};
