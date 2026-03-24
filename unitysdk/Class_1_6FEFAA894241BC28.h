#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6FEFAA894241BC28_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0xCE80FF0)
#define CLASS_1_6FEFAA894241BC28_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0xCE81250)
#define CLASS_1_6FEFAA894241BC28_METHOD_1_B0983A4401420DC3_OFFSET UNITYSDK_OFFSET(0xCE80D90)
#define CLASS_1_6FEFAA894241BC28_METHOD_1_F1512364773082ED_OFFSET UNITYSDK_OFFSET(0xCE80EB0)
#define CLASS_1_6FEFAA894241BC28_METHOD_1_F5F0F5C3CADD47B8_OFFSET UNITYSDK_OFFSET(0xCE81370)
#define CLASS_1_6FEFAA894241BC28__CTOR_OFFSET UNITYSDK_OFFSET(0xCE80D80)

inline static constexpr unsigned int Class_1_6FEFAA894241BC28_TypeDefinitionIndex = 72346;

class Class_1_6FEFAA894241BC28 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Double>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6FEFAA894241BC28_TypeDefinitionIndex)->GetStaticField(0x421D0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FEFAA894241BC28__CTOR_OFFSET))(this);
	}

	static ::System::Double Method_1_B0983A4401420DC3(::System::Int32 a1)
	{
		return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6FEFAA894241BC28_METHOD_1_B0983A4401420DC3_OFFSET))(a1);
	}

	static ::System::Double Method_1_F1512364773082ED(::System::Double a1)
	{
		return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_6FEFAA894241BC28_METHOD_1_F1512364773082ED_OFFSET))(a1);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6FEFAA894241BC28_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6FEFAA894241BC28_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Double Method_1_F5F0F5C3CADD47B8(::System::Single a1)
	{
		return ((::System::Double(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6FEFAA894241BC28_METHOD_1_F5F0F5C3CADD47B8_OFFSET))(a1);
	}
};
