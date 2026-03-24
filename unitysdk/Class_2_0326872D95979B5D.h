#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9AD3211F86FBF6BB.h"

class Class_1_90C4B35ECCD4A1CA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_0326872D95979B5D_METHOD_2_0BF34D5A5595F8DF_OFFSET UNITYSDK_OFFSET(0x1AA621D0)
#define CLASS_2_0326872D95979B5D_METHOD_2_3E7B7DB0EDF962BA_OFFSET UNITYSDK_OFFSET(0x1AA62B80)
#define CLASS_2_0326872D95979B5D_METHOD_2_4828BF2E16FA16E2_OFFSET UNITYSDK_OFFSET(0x1AA62270)
#define CLASS_2_0326872D95979B5D_METHOD_2_69991F529EC8B8E0_OFFSET UNITYSDK_OFFSET(0x1AA626E0)
#define CLASS_2_0326872D95979B5D_METHOD_2_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x1AA62990)
#define CLASS_2_0326872D95979B5D_METHOD_2_DB75C94EF3986257_OFFSET UNITYSDK_OFFSET(0x1AA61D90)
#define CLASS_2_0326872D95979B5D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA61CF0)
#define CLASS_2_0326872D95979B5D__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA61C60)

inline static constexpr unsigned int Class_2_0326872D95979B5D_TypeDefinitionIndex = 7700;

class Class_2_0326872D95979B5D : public ::Class_1_9AD3211F86FBF6BB
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_90C4B35ECCD4A1CA*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_90C4B35ECCD4A1CA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0326872D95979B5D_TypeDefinitionIndex)->GetStaticField(0x7440);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_90C4B35ECCD4A1CA*>* Field_2_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0326872D95979B5D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0326872D95979B5D__CCTOR_OFFSET))();
	}

	static ::System::Void Method_2_DB75C94EF3986257(::System::Boolean a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_90C4B35ECCD4A1CA*>*& a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_90C4B35ECCD4A1CA*>*&))((::PBYTE)hIl2Cpp + CLASS_2_0326872D95979B5D_METHOD_2_DB75C94EF3986257_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_90C4B35ECCD4A1CA*>* Method_2_0BF34D5A5595F8DF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_90C4B35ECCD4A1CA*>*(*)())((::PBYTE)hIl2Cpp + CLASS_2_0326872D95979B5D_METHOD_2_0BF34D5A5595F8DF_OFFSET))();
	}

	static ::System::Void Method_2_4828BF2E16FA16E2(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_90C4B35ECCD4A1CA*>*& a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_90C4B35ECCD4A1CA*>*&))((::PBYTE)hIl2Cpp + CLASS_2_0326872D95979B5D_METHOD_2_4828BF2E16FA16E2_OFFSET))(a1);
	}

	static ::Class_2_0326872D95979B5D* Method_2_69991F529EC8B8E0()
	{
		return ((::Class_2_0326872D95979B5D*(*)())((::PBYTE)hIl2Cpp + CLASS_2_0326872D95979B5D_METHOD_2_69991F529EC8B8E0_OFFSET))();
	}

	::System::Void Method_2_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0326872D95979B5D_METHOD_2_CCFD131833AE484B_OFFSET))(this);
	}

	static ::System::Void Method_2_3E7B7DB0EDF962BA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0326872D95979B5D_METHOD_2_3E7B7DB0EDF962BA_OFFSET))();
	}
};
