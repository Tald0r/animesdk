#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/VideoQuality.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigVideoQualitySetting; }
namespace System { class String; }

#define CLASS_1_033140A8A39EE335_METHOD_1_420C3F78C7C174BB_OFFSET UNITYSDK_OFFSET(0x8FC4C50)
#define CLASS_1_033140A8A39EE335_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x8FC4A60)
#define CLASS_1_033140A8A39EE335_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x8FC49D0)
#define CLASS_1_033140A8A39EE335__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FC49C0)

inline static constexpr unsigned int Class_1_033140A8A39EE335_TypeDefinitionIndex = 43341;

class Class_1_033140A8A39EE335 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigVideoQualitySetting** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigVideoQualitySetting**)Il2CppClass::FromTypeDefinitionIndex(Class_1_033140A8A39EE335_TypeDefinitionIndex)->GetStaticField(0x2BDD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_033140A8A39EE335__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_033140A8A39EE335_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_033140A8A39EE335_METHOD_1_97D83E4CB3B11935_OFFSET))();
	}

	static ::MoleMole::Config::VideoQuality Method_1_420C3F78C7C174BB(::System::String* a1, ::MoleMole::Config::VideoQuality a2)
	{
		return ((::MoleMole::Config::VideoQuality(*)(::System::String*, ::MoleMole::Config::VideoQuality))((::PBYTE)hIl2Cpp + CLASS_1_033140A8A39EE335_METHOD_1_420C3F78C7C174BB_OFFSET))(a1, a2);
	}
};
