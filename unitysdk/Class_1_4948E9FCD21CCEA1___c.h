#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineDataExtra; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_4948E9FCD21CCEA1___C_METHOD_1_E636F7E6BCF8B2F2_OFFSET UNITYSDK_OFFSET(0xB46ADF0)
#define CLASS_1_4948E9FCD21CCEA1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB46ADA0)
#define CLASS_1_4948E9FCD21CCEA1___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB46ADE0)

inline static constexpr unsigned int Class_1_4948E9FCD21CCEA1___c_TypeDefinitionIndex = 40586;

class Class_1_4948E9FCD21CCEA1___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::MoleMole::ConfigTimelineDataExtra*>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::MoleMole::ConfigTimelineDataExtra*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4948E9FCD21CCEA1___c_TypeDefinitionIndex)->GetStaticField(0x31CC0);
	}
	static ::Class_1_4948E9FCD21CCEA1___c** StaticGet___9()
	{
		return (::Class_1_4948E9FCD21CCEA1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4948E9FCD21CCEA1___c_TypeDefinitionIndex)->GetStaticField(0x31CC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4948E9FCD21CCEA1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4948E9FCD21CCEA1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_E636F7E6BCF8B2F2(::MoleMole::ConfigTimelineDataExtra* a1, ::MoleMole::ConfigTimelineDataExtra* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::ConfigTimelineDataExtra*, ::MoleMole::ConfigTimelineDataExtra*))((::PBYTE)hIl2Cpp + CLASS_1_4948E9FCD21CCEA1___C_METHOD_1_E636F7E6BCF8B2F2_OFFSET))(this, a1, a2);
	}
};
