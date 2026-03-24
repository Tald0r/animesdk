#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7FD0C6F4D0CF0F96.h"

class Class_1_4D65A0FCDA8137CB;
namespace MoleMole::Config { class PhotoCameraModeOverride; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B97F91670F801CBC_METHOD_2_038349821F206DD5_OFFSET UNITYSDK_OFFSET(0x9B736D0)
#define CLASS_2_B97F91670F801CBC_METHOD_2_433EC87BF5181040_OFFSET UNITYSDK_OFFSET(0x9B736C0)
#define CLASS_2_B97F91670F801CBC_METHOD_2_6D71CC7A9DF62322_OFFSET UNITYSDK_OFFSET(0x9B73420)
#define CLASS_2_B97F91670F801CBC_METHOD_2_765F20AE50A3938C_OFFSET UNITYSDK_OFFSET(0x9B73650)
#define CLASS_2_B97F91670F801CBC_METHOD_2_D94501603FB7EA1C_OFFSET UNITYSDK_OFFSET(0x9B731F0)
#define CLASS_2_B97F91670F801CBC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9B72E70)
#define CLASS_2_B97F91670F801CBC__CTOR_OFFSET UNITYSDK_OFFSET(0x9B72E10)

inline static constexpr unsigned int Class_2_B97F91670F801CBC_TypeDefinitionIndex = 68086;

class Class_2_B97F91670F801CBC : public ::Class_1_7FD0C6F4D0CF0F96
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x18

	::System::Void _ctor(::Il2CppArray<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_B97F91670F801CBC__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_B97F91670F801CBC__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D94501603FB7EA1C(::Class_1_4D65A0FCDA8137CB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D65A0FCDA8137CB*))((::PBYTE)hIl2Cpp + CLASS_2_B97F91670F801CBC_METHOD_2_D94501603FB7EA1C_OFFSET))(this, a1);
	}

	::System::Void Method_2_6D71CC7A9DF62322()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B97F91670F801CBC_METHOD_2_6D71CC7A9DF62322_OFFSET))(this);
	}

	::System::Void Method_2_765F20AE50A3938C(::MoleMole::Config::PhotoCameraModeOverride* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PhotoCameraModeOverride*))((::PBYTE)hIl2Cpp + CLASS_2_B97F91670F801CBC_METHOD_2_765F20AE50A3938C_OFFSET))(this, a1);
	}

	::System::Void Method_2_433EC87BF5181040(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_B97F91670F801CBC_METHOD_2_433EC87BF5181040_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_038349821F206DD5()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B97F91670F801CBC_METHOD_2_038349821F206DD5_OFFSET))(this);
	}
};
