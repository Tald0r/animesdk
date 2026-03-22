#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_EDA2D665E8559D21_Struct_2_932E03B06FC34483.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_1_7807B2B04302CD7B;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EDA2D665E8559D21_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9592FC0)
#define CLASS_2_EDA2D665E8559D21_METHOD_2_406174A47F38EDFD_OFFSET UNITYSDK_OFFSET(0x95932C0)
#define CLASS_2_EDA2D665E8559D21_METHOD_2_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x95934C0)
#define CLASS_2_EDA2D665E8559D21_METHOD_2_E03B96F01A6BBC77_OFFSET UNITYSDK_OFFSET(0x9593440)
#define CLASS_2_EDA2D665E8559D21_METHOD_2_E74FF508BE0BE487_1_OFFSET UNITYSDK_OFFSET(0x95933C0)
#define CLASS_2_EDA2D665E8559D21_METHOD_2_E74FF508BE0BE487_OFFSET UNITYSDK_OFFSET(0x9593340)
#define CLASS_2_EDA2D665E8559D21_METHOD_2_FDF6DDB2A92627F7_OFFSET UNITYSDK_OFFSET(0x9593140)
#define CLASS_2_EDA2D665E8559D21_ONCREATE_OFFSET UNITYSDK_OFFSET(0x9592F60)
#define CLASS_2_EDA2D665E8559D21__CTOR_OFFSET UNITYSDK_OFFSET(0x9593020)

inline static constexpr unsigned int Class_2_EDA2D665E8559D21_TypeDefinitionIndex = 61635;

class Class_2_EDA2D665E8559D21 : public ::Foundation::SingletonDisposable_1<::Class_2_EDA2D665E8559D21*>
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_3; // 0x10
	::System::Collections::Generic::List_1<::Class_2_EDA2D665E8559D21_Struct_2_932E03B06FC34483>* Field_2_1; // 0x18
	::Class_1_7807B2B04302CD7B* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDA2D665E8559D21__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDA2D665E8559D21_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDA2D665E8559D21_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_2_FDF6DDB2A92627F7(::System::Func_2<::System::Int32, ::System::Boolean>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_EDA2D665E8559D21_METHOD_2_FDF6DDB2A92627F7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_406174A47F38EDFD(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EDA2D665E8559D21_METHOD_2_406174A47F38EDFD_OFFSET))(this, a1);
	}

	::System::Void Method_2_E74FF508BE0BE487(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EDA2D665E8559D21_METHOD_2_E74FF508BE0BE487_OFFSET))(this, a1);
	}

	::System::Void Method_2_E74FF508BE0BE487_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EDA2D665E8559D21_METHOD_2_E74FF508BE0BE487_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E03B96F01A6BBC77(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EDA2D665E8559D21_METHOD_2_E03B96F01A6BBC77_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDA2D665E8559D21_METHOD_2_CD8EB704BDED69B6_OFFSET))(this);
	}
};
