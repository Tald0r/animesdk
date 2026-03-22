#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6FEFAA894241BC28_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x96BBB70)
#define CLASS_1_6FEFAA894241BC28_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x96BBA60)
#define CLASS_1_6FEFAA894241BC28_METHOD_1_B0983A4401420DC3_OFFSET UNITYSDK_OFFSET(0x96BB940)
#define CLASS_1_6FEFAA894241BC28_METHOD_1_F1512364773082ED_OFFSET UNITYSDK_OFFSET(0x96BB800)
#define CLASS_1_6FEFAA894241BC28_METHOD_1_F5F0F5C3CADD47B8_OFFSET UNITYSDK_OFFSET(0x96BBDD0)
#define CLASS_1_6FEFAA894241BC28__CTOR_OFFSET UNITYSDK_OFFSET(0x96BB7F0)

inline static constexpr unsigned int Class_1_6FEFAA894241BC28_TypeDefinitionIndex = 51627;

class Class_1_6FEFAA894241BC28 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Double>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6FEFAA894241BC28_TypeDefinitionIndex)->GetStaticField(0x42B50);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FEFAA894241BC28__CTOR_OFFSET))(this);
	}

	static ::System::Double Method_1_F1512364773082ED(::System::Double a1)
	{
		return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_6FEFAA894241BC28_METHOD_1_F1512364773082ED_OFFSET))(a1);
	}

	static ::System::Double Method_1_B0983A4401420DC3(::System::Int32 a1)
	{
		return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6FEFAA894241BC28_METHOD_1_B0983A4401420DC3_OFFSET))(a1);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6FEFAA894241BC28_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Double Method_1_F5F0F5C3CADD47B8(::System::Single a1)
	{
		return ((::System::Double(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6FEFAA894241BC28_METHOD_1_F5F0F5C3CADD47B8_OFFSET))(a1);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6FEFAA894241BC28_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}
};
