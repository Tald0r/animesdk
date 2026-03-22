#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_E36C894DCA3F304A.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class MovableTrait; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define CLASS_3_BD3CD432BA91F5E1_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xCE5E880)
#define CLASS_3_BD3CD432BA91F5E1_METHOD_3_29D28E7F1440456B_OFFSET UNITYSDK_OFFSET(0xCE5EC30)
#define CLASS_3_BD3CD432BA91F5E1_METHOD_3_34B51152330838ED_OFFSET UNITYSDK_OFFSET(0xCE5E970)
#define CLASS_3_BD3CD432BA91F5E1_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xCE5EB30)
#define CLASS_3_BD3CD432BA91F5E1_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xCE5EB90)
#define CLASS_3_BD3CD432BA91F5E1_METHOD_3_CEE72EAC18ECC163_OFFSET UNITYSDK_OFFSET(0xCE5EA90)
#define CLASS_3_BD3CD432BA91F5E1_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xCE5E800)
#define CLASS_3_BD3CD432BA91F5E1__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE5E8E0)
#define CLASS_3_BD3CD432BA91F5E1__CTOR_OFFSET UNITYSDK_OFFSET(0xCE5E960)

inline static constexpr unsigned int Class_3_BD3CD432BA91F5E1_TypeDefinitionIndex = 44947;

class Class_3_BD3CD432BA91F5E1 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_8 = 0xAF; // 0x0
	::System::String* Field_3_0; // 0x48
	::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer* Field_3_7; // 0x50
	::System::Boolean Field_3_5; // 0x58
	::System::Single Field_3_4; // 0x5C
	::UnityEngine::Vector3 Field_3_2; // 0x60
	::System::Single Field_3_6; // 0x6C
	::UnityEngine::Vector3 Field_3_3; // 0x70
	::Enum_3_E36C894DCA3F304A Field_3_1; // 0x7C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_BD3CD432BA91F5E1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD3CD432BA91F5E1__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD3CD432BA91F5E1_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD3CD432BA91F5E1_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_34B51152330838ED(::System::String* a1, ::Enum_3_E36C894DCA3F304A a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_E36C894DCA3F304A, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_BD3CD432BA91F5E1_METHOD_3_34B51152330838ED_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_CEE72EAC18ECC163(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BD3CD432BA91F5E1_METHOD_3_CEE72EAC18ECC163_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD3CD432BA91F5E1_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_BD3CD432BA91F5E1* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_BD3CD432BA91F5E1*(*)())((::PBYTE)hIl2Cpp + CLASS_3_BD3CD432BA91F5E1_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_29D28E7F1440456B(::MoleMole::Config::MovableTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MovableTrait*))((::PBYTE)hIl2Cpp + CLASS_3_BD3CD432BA91F5E1_METHOD_3_29D28E7F1440456B_OFFSET))(this, a1);
	}
};
