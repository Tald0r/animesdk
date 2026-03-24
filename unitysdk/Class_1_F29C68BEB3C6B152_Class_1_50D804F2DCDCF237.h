#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_288;
class Class_3_D92ADC48CDFCC09B_1;
class MonoUITableScrollV2;
class MonoUITableScrollV2_InitScrollViewData;
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerable; }

#define CLASS_1_F29C68BEB3C6B152_CLASS_1_50D804F2DCDCF237_METHOD_1_16446FA894B9E3A8_OFFSET UNITYSDK_OFFSET(0xA15A920)
#define CLASS_1_F29C68BEB3C6B152_CLASS_1_50D804F2DCDCF237_METHOD_1_7FCE4374D4266590_OFFSET UNITYSDK_OFFSET(0xA15ADA0)
#define CLASS_1_F29C68BEB3C6B152_CLASS_1_50D804F2DCDCF237_METHOD_1_A99E3C491AB2C77F_OFFSET UNITYSDK_OFFSET(0xA15A720)
#define CLASS_1_F29C68BEB3C6B152_CLASS_1_50D804F2DCDCF237__CTOR_OFFSET UNITYSDK_OFFSET(0xA15A710)

inline static constexpr unsigned int Class_1_F29C68BEB3C6B152_Class_1_50D804F2DCDCF237_TypeDefinitionIndex = 75439;

class Class_1_F29C68BEB3C6B152_Class_1_50D804F2DCDCF237 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_288* Field_1_5; // 0x10
	::Class_3_D92ADC48CDFCC09B_1* Field_1_4; // 0x18
	::MonoUITableScrollV2* Field_1_0; // 0x20
	::System::Func_1<::MonoUITableScrollV2_InitScrollViewData*>* Field_1_2; // 0x28
	::System::Boolean Field_1_1; // 0x30
	::System::Boolean Field_1_3; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_50D804F2DCDCF237__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A99E3C491AB2C77F(::MonoUITableScrollV2* a1, ::System::Collections::IEnumerable* a2, ::System::Collections::IEnumerable* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::System::Collections::IEnumerable*, ::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_50D804F2DCDCF237_METHOD_1_A99E3C491AB2C77F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_16446FA894B9E3A8(::MonoUITableScrollV2* a1, ::System::Collections::IEnumerable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_50D804F2DCDCF237_METHOD_1_16446FA894B9E3A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7FCE4374D4266590(::System::Collections::IEnumerable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_50D804F2DCDCF237_METHOD_1_7FCE4374D4266590_OFFSET))(this, a1);
	}
};
