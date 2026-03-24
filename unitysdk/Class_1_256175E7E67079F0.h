#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigViewObjectMisc; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_256175E7E67079F0_METHOD_1_074045F1FBDF8496_OFFSET UNITYSDK_OFFSET(0x700C2B0)
#define CLASS_1_256175E7E67079F0_METHOD_1_415752109343FC19_OFFSET UNITYSDK_OFFSET(0x700C130)
#define CLASS_1_256175E7E67079F0_METHOD_1_4C9717BAC49A1DCF_OFFSET UNITYSDK_OFFSET(0x700C0C0)
#define CLASS_1_256175E7E67079F0_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x700BF60)
#define CLASS_1_256175E7E67079F0_METHOD_1_EF41C334DB2BB38E_OFFSET UNITYSDK_OFFSET(0x700BED0)
#define CLASS_1_256175E7E67079F0__CTOR_OFFSET UNITYSDK_OFFSET(0x700BEC0)

inline static constexpr unsigned int Class_1_256175E7E67079F0_TypeDefinitionIndex = 66618;

class Class_1_256175E7E67079F0 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigViewObjectMisc** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigViewObjectMisc**)Il2CppClass::FromTypeDefinitionIndex(Class_1_256175E7E67079F0_TypeDefinitionIndex)->GetStaticField(0x45660);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_256175E7E67079F0__CTOR_OFFSET))(this);
	}

	static ::MoleMole::Config::ConfigViewObjectMisc* Method_1_EF41C334DB2BB38E()
	{
		return ((::MoleMole::Config::ConfigViewObjectMisc*(*)())((::PBYTE)hIl2Cpp + CLASS_1_256175E7E67079F0_METHOD_1_EF41C334DB2BB38E_OFFSET))();
	}

	static ::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_256175E7E67079F0_METHOD_1_D0BD1377F2594D33_OFFSET))();
	}

	static ::System::Void Method_1_415752109343FC19(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_256175E7E67079F0_METHOD_1_415752109343FC19_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_4C9717BAC49A1DCF(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_256175E7E67079F0_METHOD_1_4C9717BAC49A1DCF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_074045F1FBDF8496(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_256175E7E67079F0_METHOD_1_074045F1FBDF8496_OFFSET))(a1, a2);
	}
};
