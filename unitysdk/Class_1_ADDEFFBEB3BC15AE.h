#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SummerEventShootingGamePlayConfig; }
namespace MoleMole { class SummerPlayerWeaponInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_ADDEFFBEB3BC15AE_METHOD_1_6E46030B497D1749_OFFSET UNITYSDK_OFFSET(0x7B908D0)
#define CLASS_1_ADDEFFBEB3BC15AE_METHOD_1_FDDC5A41F149A0CC_OFFSET UNITYSDK_OFFSET(0x7B907C0)
#define CLASS_1_ADDEFFBEB3BC15AE_METHOD_1_FFF8173DFB8F3AE2_OFFSET UNITYSDK_OFFSET(0x7B90600)
#define CLASS_1_ADDEFFBEB3BC15AE__CCTOR_OFFSET UNITYSDK_OFFSET(0x7B905F0)

inline static constexpr unsigned int Class_1_ADDEFFBEB3BC15AE_TypeDefinitionIndex = 68434;

class Class_1_ADDEFFBEB3BC15AE : public ::System::Object
{
public:
	static ::MoleMole::SummerEventShootingGamePlayConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::SummerEventShootingGamePlayConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADDEFFBEB3BC15AE_TypeDefinitionIndex)->GetStaticField(0x30FC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADDEFFBEB3BC15AE__CCTOR_OFFSET))();
	}

	static ::MoleMole::SummerPlayerWeaponInfo* Method_1_FFF8173DFB8F3AE2(::System::Int32 a1)
	{
		return ((::MoleMole::SummerPlayerWeaponInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADDEFFBEB3BC15AE_METHOD_1_FFF8173DFB8F3AE2_OFFSET))(a1);
	}

	static ::System::Void Method_1_FDDC5A41F149A0CC(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ADDEFFBEB3BC15AE_METHOD_1_FDDC5A41F149A0CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_6E46030B497D1749(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_ADDEFFBEB3BC15AE_METHOD_1_6E46030B497D1749_OFFSET))(a1, a2);
	}
};
