#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigOnGoingTypeDurationData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_64B5995EFCFBB7F6_METHOD_1_468E89153934FFD0_OFFSET UNITYSDK_OFFSET(0x94D5E60)
#define CLASS_1_64B5995EFCFBB7F6_METHOD_1_7F992A225F9B4A5E_OFFSET UNITYSDK_OFFSET(0x94D5800)
#define CLASS_1_64B5995EFCFBB7F6_METHOD_1_8A66F5228F18C198_OFFSET UNITYSDK_OFFSET(0x94D59A0)
#define CLASS_1_64B5995EFCFBB7F6__CTOR_OFFSET UNITYSDK_OFFSET(0x94D57F0)

inline static constexpr unsigned int Class_1_64B5995EFCFBB7F6_TypeDefinitionIndex = 43002;

class Class_1_64B5995EFCFBB7F6 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigOnGoingTypeDurationData** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigOnGoingTypeDurationData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_64B5995EFCFBB7F6_TypeDefinitionIndex)->GetStaticField(0x40010);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64B5995EFCFBB7F6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_7F992A225F9B4A5E(::System::Int32& a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_64B5995EFCFBB7F6_METHOD_1_7F992A225F9B4A5E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8A66F5228F18C198(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_64B5995EFCFBB7F6_METHOD_1_8A66F5228F18C198_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_468E89153934FFD0(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_64B5995EFCFBB7F6_METHOD_1_468E89153934FFD0_OFFSET))(a1, a2, a3, a4);
	}
};
