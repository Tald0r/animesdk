#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAudioBasePath; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_7BC57D3232553905_METHOD_1_00C7618BAD617D59_OFFSET UNITYSDK_OFFSET(0x8102E90)
#define CLASS_1_7BC57D3232553905_METHOD_1_5C2342D1E5F31DA7_OFFSET UNITYSDK_OFFSET(0x8102F00)
#define CLASS_1_7BC57D3232553905_METHOD_1_6912A7B4175A2C48_OFFSET UNITYSDK_OFFSET(0x81031C0)
#define CLASS_1_7BC57D3232553905_METHOD_1_AE94A2BCBE713E23_OFFSET UNITYSDK_OFFSET(0x8102D00)
#define CLASS_1_7BC57D3232553905__CTOR_OFFSET UNITYSDK_OFFSET(0x8102CF0)

inline static constexpr unsigned int Class_1_7BC57D3232553905_TypeDefinitionIndex = 41330;

class Class_1_7BC57D3232553905 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigAudioBasePath** StaticGet_Field_1_1()
	{
		return (::MoleMole::Config::ConfigAudioBasePath**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7BC57D3232553905_TypeDefinitionIndex)->GetStaticField(0x362F0);
	}
	// static const ::System::String* Field_1_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC57D3232553905__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_AE94A2BCBE713E23(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7BC57D3232553905_METHOD_1_AE94A2BCBE713E23_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5C2342D1E5F31DA7(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7BC57D3232553905_METHOD_1_5C2342D1E5F31DA7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_00C7618BAD617D59(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7BC57D3232553905_METHOD_1_00C7618BAD617D59_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigAudioBasePath* Method_1_6912A7B4175A2C48()
	{
		return ((::MoleMole::Config::ConfigAudioBasePath*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7BC57D3232553905_METHOD_1_6912A7B4175A2C48_OFFSET))();
	}
};
