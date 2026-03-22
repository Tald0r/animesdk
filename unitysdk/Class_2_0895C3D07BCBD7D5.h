#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/MoleMole/Config/StimulusEventItem.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0895C3D07BCBD7D5_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x9590010)
#define CLASS_2_0895C3D07BCBD7D5_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x9590020)
#define CLASS_2_0895C3D07BCBD7D5_METHOD_2_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x9590030)
#define CLASS_2_0895C3D07BCBD7D5_METHOD_2_832295EC279E5994_4_OFFSET UNITYSDK_OFFSET(0x9590040)
#define CLASS_2_0895C3D07BCBD7D5_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x9590000)
#define CLASS_2_0895C3D07BCBD7D5_ONATTACH_OFFSET UNITYSDK_OFFSET(0x958FE10)
#define CLASS_2_0895C3D07BCBD7D5_ONDETACH_OFFSET UNITYSDK_OFFSET(0x958FE70)
#define CLASS_2_0895C3D07BCBD7D5_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x958FF30)
#define CLASS_2_0895C3D07BCBD7D5_ONENABLE_OFFSET UNITYSDK_OFFSET(0x958FED0)
#define CLASS_2_0895C3D07BCBD7D5_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x958FF90)
#define CLASS_2_0895C3D07BCBD7D5__CTOR_OFFSET UNITYSDK_OFFSET(0x958FFF0)

inline static constexpr unsigned int Class_2_0895C3D07BCBD7D5_TypeDefinitionIndex = 44135;

class Class_2_0895C3D07BCBD7D5 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_0895C3D07BCBD7D5*>
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::StimulusEventItem>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0895C3D07BCBD7D5__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0895C3D07BCBD7D5_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0895C3D07BCBD7D5_ONDETACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0895C3D07BCBD7D5_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0895C3D07BCBD7D5_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0895C3D07BCBD7D5_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0895C3D07BCBD7D5_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0895C3D07BCBD7D5_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0895C3D07BCBD7D5_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0895C3D07BCBD7D5_METHOD_2_832295EC279E5994_3_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0895C3D07BCBD7D5_METHOD_2_832295EC279E5994_4_OFFSET))(this);
	}
};
