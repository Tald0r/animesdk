#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0F5195356F0210F0_1.h"

class Class_3_514273462AB8F0D3;
class Class_3_EC25B6E84130E2CA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_514273462AB8F0D3_CLASS_2_A514CF53C52721E9_METHOD_2_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0xA967D40)
#define CLASS_3_514273462AB8F0D3_CLASS_2_A514CF53C52721E9_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xA967ED0)
#define CLASS_3_514273462AB8F0D3_CLASS_2_A514CF53C52721E9__CTOR_OFFSET UNITYSDK_OFFSET(0xA967CB0)

inline static constexpr unsigned int Class_3_514273462AB8F0D3_Class_2_A514CF53C52721E9_TypeDefinitionIndex = 65349;

class Class_3_514273462AB8F0D3_Class_2_A514CF53C52721E9 : public ::Class_1_0F5195356F0210F0_1
{
public:
	::System::Collections::Generic::List_1<::Class_3_EC25B6E84130E2CA*>* Field_2_0; // 0x18
	::System::Boolean Field_2_1; // 0x20

	::System::Void _ctor(::Class_3_514273462AB8F0D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_514273462AB8F0D3*))((::PBYTE)hIl2Cpp + CLASS_3_514273462AB8F0D3_CLASS_2_A514CF53C52721E9__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_5E72916301E347E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_514273462AB8F0D3_CLASS_2_A514CF53C52721E9_METHOD_2_5E72916301E347E2_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_514273462AB8F0D3_CLASS_2_A514CF53C52721E9_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
