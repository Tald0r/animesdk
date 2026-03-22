#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_443BE580FCEE30C4;
class Class_1_5FB2F93A997B7BFE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BD6D8F4F4FA3C8FC_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x6E79310)
#define CLASS_1_BD6D8F4F4FA3C8FC_METHOD_1_BE58C98ED0702F10_OFFSET UNITYSDK_OFFSET(0x6E78AF0)
#define CLASS_1_BD6D8F4F4FA3C8FC_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x6E788F0)
#define CLASS_1_BD6D8F4F4FA3C8FC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6E78890)
#define CLASS_1_BD6D8F4F4FA3C8FC__CTOR_OFFSET UNITYSDK_OFFSET(0x6E78950)

inline static constexpr unsigned int Class_1_BD6D8F4F4FA3C8FC_TypeDefinitionIndex = 68453;

class Class_1_BD6D8F4F4FA3C8FC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_5FB2F93A997B7BFE*>* Field_1_1; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_4; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_443BE580FCEE30C4*>* Field_1_0; // 0x20
	::System::Boolean Field_1_2; // 0x28
	::System::Int32 Field_1_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD6D8F4F4FA3C8FC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD6D8F4F4FA3C8FC_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD6D8F4F4FA3C8FC_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_443BE580FCEE30C4*>* Method_1_BE58C98ED0702F10()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_443BE580FCEE30C4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD6D8F4F4FA3C8FC_METHOD_1_BE58C98ED0702F10_OFFSET))(this);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD6D8F4F4FA3C8FC_METHOD_1_367B9590522079D1_OFFSET))(this);
	}
};
