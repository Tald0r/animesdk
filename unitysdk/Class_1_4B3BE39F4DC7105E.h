#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LanguageFontSizeConfig.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIFontSize; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_4B3BE39F4DC7105E_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x6FFBE10)
#define CLASS_1_4B3BE39F4DC7105E_METHOD_1_21516188EE2205D4_OFFSET UNITYSDK_OFFSET(0x6FFC180)
#define CLASS_1_4B3BE39F4DC7105E_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x6FFC070)

inline static constexpr unsigned int Class_1_4B3BE39F4DC7105E_TypeDefinitionIndex = 40808;

class Class_1_4B3BE39F4DC7105E : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUIFontSize** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigUIFontSize**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B3BE39F4DC7105E_TypeDefinitionIndex)->GetStaticField(0x45630);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4B3BE39F4DC7105E_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B3BE39F4DC7105E_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_21516188EE2205D4(::System::String* a1, ::MoleMole::LanguageType a2, ::MoleMole::Config::LanguageFontSizeConfig& a3, ::System::Boolean& a4)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::LanguageType, ::MoleMole::Config::LanguageFontSizeConfig&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_4B3BE39F4DC7105E_METHOD_1_21516188EE2205D4_OFFSET))(a1, a2, a3, a4);
	}
};
