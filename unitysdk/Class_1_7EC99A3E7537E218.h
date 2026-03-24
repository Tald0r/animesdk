#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageVoiceType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSoundWave; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_7EC99A3E7537E218_METHOD_1_1A8718CB250E7D1E_OFFSET UNITYSDK_OFFSET(0x6DA9100)
#define CLASS_1_7EC99A3E7537E218_METHOD_1_2687B83EC134BD8E_1_OFFSET UNITYSDK_OFFSET(0x6DA9990)
#define CLASS_1_7EC99A3E7537E218_METHOD_1_2687B83EC134BD8E_OFFSET UNITYSDK_OFFSET(0x6DA97E0)
#define CLASS_1_7EC99A3E7537E218_METHOD_1_415752109343FC19_OFFSET UNITYSDK_OFFSET(0x6DA9870)
#define CLASS_1_7EC99A3E7537E218__CCTOR_OFFSET UNITYSDK_OFFSET(0x6DA90F0)
#define CLASS_1_7EC99A3E7537E218__CTOR_OFFSET UNITYSDK_OFFSET(0x6DA90E0)

inline static constexpr unsigned int Class_1_7EC99A3E7537E218_TypeDefinitionIndex = 57428;

class Class_1_7EC99A3E7537E218 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigSoundWave** StaticGet_Field_1_2()
	{
		return (::MoleMole::Config::ConfigSoundWave**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7EC99A3E7537E218_TypeDefinitionIndex)->GetStaticField(0x3E860);
	}
	static ::MoleMole::Config::ConfigSoundWave** StaticGet_Field_1_1()
	{
		return (::MoleMole::Config::ConfigSoundWave**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7EC99A3E7537E218_TypeDefinitionIndex)->GetStaticField(0x3E868);
	}
	static ::MoleMole::LanguageVoiceType* StaticGet_Field_1_0()
	{
		return (::MoleMole::LanguageVoiceType*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7EC99A3E7537E218_TypeDefinitionIndex)->GetStaticField(0xF2A0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EC99A3E7537E218__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7EC99A3E7537E218__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_1A8718CB250E7D1E(::System::Boolean a1, ::System::Action* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7EC99A3E7537E218_METHOD_1_1A8718CB250E7D1E_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::Config::ConfigSoundWave* Method_1_2687B83EC134BD8E()
	{
		return ((::MoleMole::Config::ConfigSoundWave*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7EC99A3E7537E218_METHOD_1_2687B83EC134BD8E_OFFSET))();
	}

	static ::System::Void Method_1_415752109343FC19(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7EC99A3E7537E218_METHOD_1_415752109343FC19_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigSoundWave* Method_1_2687B83EC134BD8E_1()
	{
		return ((::MoleMole::Config::ConfigSoundWave*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7EC99A3E7537E218_METHOD_1_2687B83EC134BD8E_1_OFFSET))();
	}
};
