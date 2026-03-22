#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class MultiVersionDiffConfig; }
namespace Foundation { class MultiVersionInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E9A7520E7558FD24_METHOD_1_5061D2A51775D8C6_OFFSET UNITYSDK_OFFSET(0x75CD710)
#define CLASS_1_E9A7520E7558FD24_METHOD_1_52C59DB9A98C01C7_OFFSET UNITYSDK_OFFSET(0x75CD9C0)
#define CLASS_1_E9A7520E7558FD24_METHOD_1_FDDC5A41F149A0CC_OFFSET UNITYSDK_OFFSET(0x75CD600)
#define CLASS_1_E9A7520E7558FD24__CCTOR_OFFSET UNITYSDK_OFFSET(0x75CD5F0)

inline static constexpr unsigned int Class_1_E9A7520E7558FD24_TypeDefinitionIndex = 55844;

class Class_1_E9A7520E7558FD24 : public ::System::Object
{
public:
	static ::Foundation::MultiVersionDiffConfig** StaticGet_Field_1_0()
	{
		return (::Foundation::MultiVersionDiffConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E9A7520E7558FD24_TypeDefinitionIndex)->GetStaticField(0x33470);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::MultiVersionInfo*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::MultiVersionInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E9A7520E7558FD24_TypeDefinitionIndex)->GetStaticField(0x33478);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E9A7520E7558FD24__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_FDDC5A41F149A0CC(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E9A7520E7558FD24_METHOD_1_FDDC5A41F149A0CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::MultiVersionInfo*>* Method_1_52C59DB9A98C01C7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::MultiVersionInfo*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E9A7520E7558FD24_METHOD_1_52C59DB9A98C01C7_OFFSET))();
	}

	static ::System::Void Method_1_5061D2A51775D8C6(::System::Boolean a1, ::System::Action_1<::Foundation::MultiVersionDiffConfig*>* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action_1<::Foundation::MultiVersionDiffConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_E9A7520E7558FD24_METHOD_1_5061D2A51775D8C6_OFFSET))(a1, a2);
	}
};
