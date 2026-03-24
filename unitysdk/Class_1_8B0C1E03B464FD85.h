#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigWindFieldProperty; }
namespace MoleMole::Config { class WindFieldConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8B0C1E03B464FD85_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x9336620)
#define CLASS_1_8B0C1E03B464FD85_METHOD_1_429F243E2C36D431_OFFSET UNITYSDK_OFFSET(0x93364D0)
#define CLASS_1_8B0C1E03B464FD85_METHOD_1_5E4507E85F005E87_OFFSET UNITYSDK_OFFSET(0x9336880)
#define CLASS_1_8B0C1E03B464FD85_METHOD_1_9276F134FB06687A_OFFSET UNITYSDK_OFFSET(0x93368C0)
#define CLASS_1_8B0C1E03B464FD85_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x9336510)

inline static constexpr unsigned int Class_1_8B0C1E03B464FD85_TypeDefinitionIndex = 43833;

class Class_1_8B0C1E03B464FD85 : public ::System::Object
{
public:
	static ::MoleMole::Config::WindFieldConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::WindFieldConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B0C1E03B464FD85_TypeDefinitionIndex)->GetStaticField(0x2F5F0);
	}

	static ::MoleMole::Config::WindFieldConfig* Method_1_429F243E2C36D431()
	{
		return ((::MoleMole::Config::WindFieldConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B0C1E03B464FD85_METHOD_1_429F243E2C36D431_OFFSET))();
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8B0C1E03B464FD85_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5E4507E85F005E87(::MoleMole::Config::WindFieldConfig* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::WindFieldConfig*))((::PBYTE)hIl2Cpp + CLASS_1_8B0C1E03B464FD85_METHOD_1_5E4507E85F005E87_OFFSET))(a1);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8B0C1E03B464FD85_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigWindFieldProperty* Method_1_9276F134FB06687A(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigWindFieldProperty*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8B0C1E03B464FD85_METHOD_1_9276F134FB06687A_OFFSET))(a1);
	}
};
