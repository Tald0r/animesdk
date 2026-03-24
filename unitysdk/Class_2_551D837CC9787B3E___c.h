#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_551D837CC9787B3E___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x64DA630)
#define CLASS_2_551D837CC9787B3E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x64DA5E0)
#define CLASS_2_551D837CC9787B3E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x64DA620)

inline static constexpr unsigned int Class_2_551D837CC9787B3E___c_TypeDefinitionIndex = 68048;

class Class_2_551D837CC9787B3E___c : public ::System::Object
{
public:
	static ::Class_2_551D837CC9787B3E___c** StaticGet___9()
	{
		return (::Class_2_551D837CC9787B3E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_551D837CC9787B3E___c_TypeDefinitionIndex)->GetStaticField(0x42920);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__17_19()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_551D837CC9787B3E___c_TypeDefinitionIndex)->GetStaticField(0x42928);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_551D837CC9787B3E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_551D837CC9787B3E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_551D837CC9787B3E___C_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}
};
