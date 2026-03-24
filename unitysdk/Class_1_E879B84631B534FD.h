#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelGlobalCounterstrokeConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_E879B84631B534FD_METHOD_1_0EE9A816A5FD11C4_OFFSET UNITYSDK_OFFSET(0x83E50C0)
#define CLASS_1_E879B84631B534FD_METHOD_1_B68DDCEEA8CCA52E_OFFSET UNITYSDK_OFFSET(0x83E4FB0)
#define CLASS_1_E879B84631B534FD__CCTOR_OFFSET UNITYSDK_OFFSET(0x83E4FA0)

inline static constexpr unsigned int Class_1_E879B84631B534FD_TypeDefinitionIndex = 44008;

class Class_1_E879B84631B534FD : public ::System::Object
{
public:
	static ::MoleMole::Config::LevelGlobalCounterstrokeConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::LevelGlobalCounterstrokeConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E879B84631B534FD_TypeDefinitionIndex)->GetStaticField(0x2FC40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E879B84631B534FD__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_B68DDCEEA8CCA52E(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E879B84631B534FD_METHOD_1_B68DDCEEA8CCA52E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0EE9A816A5FD11C4(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E879B84631B534FD_METHOD_1_0EE9A816A5FD11C4_OFFSET))(a1, a2);
	}
};
