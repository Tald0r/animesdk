#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_255;
class Class_5_2169ABC757988FED;
class Class_5_AF65C3A968E836D2;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_96DDC2D04FBBB16D_METHOD_1_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0xD78F030)
#define CLASS_1_96DDC2D04FBBB16D_METHOD_1_518CC3405E8EB087_OFFSET UNITYSDK_OFFSET(0xD78EE10)
#define CLASS_1_96DDC2D04FBBB16D_METHOD_1_883F1F4D8BD8E582_1_OFFSET UNITYSDK_OFFSET(0xD78F270)
#define CLASS_1_96DDC2D04FBBB16D_METHOD_1_883F1F4D8BD8E582_OFFSET UNITYSDK_OFFSET(0xD78EBB0)
#define CLASS_1_96DDC2D04FBBB16D_METHOD_1_B43DD0430B0FE876_OFFSET UNITYSDK_OFFSET(0xD78EA00)
#define CLASS_1_96DDC2D04FBBB16D_METHOD_1_FE268EA0D7E91617_OFFSET UNITYSDK_OFFSET(0xD78E6D0)
#define CLASS_1_96DDC2D04FBBB16D__CTOR_OFFSET UNITYSDK_OFFSET(0xD78E5D0)

inline static constexpr unsigned int Class_1_96DDC2D04FBBB16D_TypeDefinitionIndex = 39940;

class Class_1_96DDC2D04FBBB16D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_255*>* Field_1_1; // 0x10
	::Class_5_AF65C3A968E836D2* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_255*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_5_AF65C3A968E836D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + CLASS_1_96DDC2D04FBBB16D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_FE268EA0D7E91617()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96DDC2D04FBBB16D_METHOD_1_FE268EA0D7E91617_OFFSET))(this);
	}

	::System::Void Method_1_883F1F4D8BD8E582(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_96DDC2D04FBBB16D_METHOD_1_883F1F4D8BD8E582_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_518CC3405E8EB087(::Class_5_2169ABC757988FED* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_2169ABC757988FED*))((::PBYTE)hIl2Cpp + CLASS_1_96DDC2D04FBBB16D_METHOD_1_518CC3405E8EB087_OFFSET))(this, a1);
	}

	::System::Void Method_1_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96DDC2D04FBBB16D_METHOD_1_4D9E1AC61B60D577_OFFSET))(this);
	}

	::System::Void Method_1_883F1F4D8BD8E582_1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_96DDC2D04FBBB16D_METHOD_1_883F1F4D8BD8E582_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B43DD0430B0FE876(::Class_0_16E4307DCC419505_255* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_255*))((::PBYTE)hIl2Cpp + CLASS_1_96DDC2D04FBBB16D_METHOD_1_B43DD0430B0FE876_OFFSET))(this, a1);
	}
};
