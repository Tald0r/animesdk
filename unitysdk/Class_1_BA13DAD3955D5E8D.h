#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_00F951447225F66D;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BA13DAD3955D5E8D_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x7347080)
#define CLASS_1_BA13DAD3955D5E8D__CCTOR_OFFSET UNITYSDK_OFFSET(0x7346FE0)

inline static constexpr unsigned int Class_1_BA13DAD3955D5E8D_TypeDefinitionIndex = 61942;

class Class_1_BA13DAD3955D5E8D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_00F951447225F66D*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_00F951447225F66D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BA13DAD3955D5E8D_TypeDefinitionIndex)->GetStaticField(0x3DF70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BA13DAD3955D5E8D__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BA13DAD3955D5E8D_METHOD_1_AA169839CB93802A_OFFSET))();
	}
};
