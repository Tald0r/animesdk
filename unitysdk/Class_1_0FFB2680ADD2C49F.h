#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FFB2680ADD2C49F_Struct_2_CEA3583D515FCB73_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0FFB2680ADD2C49F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D2D640)
#define CLASS_1_0FFB2680ADD2C49F_METHOD_1_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x8D2DDA0)
#define CLASS_1_0FFB2680ADD2C49F_METHOD_1_3D5D45912BA5F5BB_OFFSET UNITYSDK_OFFSET(0x8D2D800)
#define CLASS_1_0FFB2680ADD2C49F_METHOD_1_7EF95C78F10A3FD5_OFFSET UNITYSDK_OFFSET(0x8D2DB60)
#define CLASS_1_0FFB2680ADD2C49F_METHOD_1_93534C793557DB61_OFFSET UNITYSDK_OFFSET(0x8D2DE70)
#define CLASS_1_0FFB2680ADD2C49F_METHOD_1_DA4E5C8C6A9CEFD3_OFFSET UNITYSDK_OFFSET(0x8D2D4D0)
#define CLASS_1_0FFB2680ADD2C49F__CTOR_OFFSET UNITYSDK_OFFSET(0x8D2D4C0)

inline static constexpr unsigned int Class_1_0FFB2680ADD2C49F_TypeDefinitionIndex = 42818;

class Class_1_0FFB2680ADD2C49F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_0FFB2680ADD2C49F_Struct_2_CEA3583D515FCB73_1>*>* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x1C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0FFB2680ADD2C49F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FFB2680ADD2C49F_DISPOSE_OFFSET))(this);
	}

	::System::UInt32 Method_1_7EF95C78F10A3FD5(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0FFB2680ADD2C49F_METHOD_1_7EF95C78F10A3FD5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3D5D45912BA5F5BB(::System::Collections::Generic::List_1<::Class_1_0FFB2680ADD2C49F_Struct_2_CEA3583D515FCB73_1>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0FFB2680ADD2C49F_Struct_2_CEA3583D515FCB73_1>*))((::PBYTE)hIl2Cpp + CLASS_1_0FFB2680ADD2C49F_METHOD_1_3D5D45912BA5F5BB_OFFSET))(this, a1);
	}

	::System::Void Method_1_DA4E5C8C6A9CEFD3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0FFB2680ADD2C49F_METHOD_1_DA4E5C8C6A9CEFD3_OFFSET))(this, a1);
	}

	::System::Void Method_1_25EC451C0EA68F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FFB2680ADD2C49F_METHOD_1_25EC451C0EA68F53_OFFSET))(this);
	}

	::System::Void Method_1_93534C793557DB61(::Class_1_0FFB2680ADD2C49F_Struct_2_CEA3583D515FCB73_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0FFB2680ADD2C49F_Struct_2_CEA3583D515FCB73_1))((::PBYTE)hIl2Cpp + CLASS_1_0FFB2680ADD2C49F_METHOD_1_93534C793557DB61_OFFSET))(this, a1);
	}
};
