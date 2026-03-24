#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIGachaPortrait; }
namespace MoleMole::Config { class ConfigUIGachaRoleConfig; }
namespace MoleMole::Config { class ConfigUIPortraitItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_432273B83530704A_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0xD9FF980)
#define CLASS_1_432273B83530704A_METHOD_1_1D2BB7EA78E0330B_OFFSET UNITYSDK_OFFSET(0xD9FFBE0)
#define CLASS_1_432273B83530704A_METHOD_1_4FE92F8DEEF55C03_OFFSET UNITYSDK_OFFSET(0xD9FF690)
#define CLASS_1_432273B83530704A_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0xD9FF870)
#define CLASS_1_432273B83530704A_METHOD_1_D6147092BA548511_OFFSET UNITYSDK_OFFSET(0xD9FF7E0)

inline static constexpr unsigned int Class_1_432273B83530704A_TypeDefinitionIndex = 62616;

class Class_1_432273B83530704A : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUIGachaPortrait** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigUIGachaPortrait**)Il2CppClass::FromTypeDefinitionIndex(Class_1_432273B83530704A_TypeDefinitionIndex)->GetStaticField(0x2F9A0);
	}

	static ::MoleMole::Config::ConfigUIPortraitItem* Method_1_4FE92F8DEEF55C03(::System::String* a1, ::System::String* a2)
	{
		return ((::MoleMole::Config::ConfigUIPortraitItem*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_432273B83530704A_METHOD_1_4FE92F8DEEF55C03_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigUIGachaPortrait* Method_1_D6147092BA548511()
	{
		return ((::MoleMole::Config::ConfigUIGachaPortrait*(*)())((::PBYTE)hIl2Cpp + CLASS_1_432273B83530704A_METHOD_1_D6147092BA548511_OFFSET))();
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_432273B83530704A_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigUIGachaRoleConfig* Method_1_1D2BB7EA78E0330B(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::MoleMole::Config::ConfigUIGachaRoleConfig*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_432273B83530704A_METHOD_1_1D2BB7EA78E0330B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_432273B83530704A_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}
};
