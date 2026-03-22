#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_C98333CC3BED3EBC_METHOD_1_2EFBBD3750E76EFE_OFFSET UNITYSDK_OFFSET(0xA14C630)
#define CLASS_1_C98333CC3BED3EBC_METHOD_1_A8D19485AA054B2A_OFFSET UNITYSDK_OFFSET(0xA14C9D0)
#define CLASS_1_C98333CC3BED3EBC_METHOD_1_B2CC0A9E38D06238_OFFSET UNITYSDK_OFFSET(0xA14C160)
#define CLASS_1_C98333CC3BED3EBC__CCTOR_OFFSET UNITYSDK_OFFSET(0xA14C150)
#define CLASS_1_C98333CC3BED3EBC__CTOR_OFFSET UNITYSDK_OFFSET(0xA14C0C0)

inline static constexpr unsigned int Class_1_C98333CC3BED3EBC_TypeDefinitionIndex = 73240;

class Class_1_C98333CC3BED3EBC : public ::System::Object
{
public:
	static ::Class_1_C98333CC3BED3EBC** StaticGet_Field_1_0()
	{
		return (::Class_1_C98333CC3BED3EBC**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C98333CC3BED3EBC_TypeDefinitionIndex)->GetStaticField(0x42EB0);
	}
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>*>* Field_1_1; // 0x10
	::System::Boolean Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C98333CC3BED3EBC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C98333CC3BED3EBC__CCTOR_OFFSET))();
	}

	::System::Void Method_1_B2CC0A9E38D06238(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C98333CC3BED3EBC_METHOD_1_B2CC0A9E38D06238_OFFSET))(this, a1);
	}

	::System::Void Method_1_2EFBBD3750E76EFE(::UnityEngine::GameObject* a1, ::System::String* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C98333CC3BED3EBC_METHOD_1_2EFBBD3750E76EFE_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_1_C98333CC3BED3EBC* Method_1_A8D19485AA054B2A()
	{
		return ((::Class_1_C98333CC3BED3EBC*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C98333CC3BED3EBC_METHOD_1_A8D19485AA054B2A_OFFSET))();
	}
};
