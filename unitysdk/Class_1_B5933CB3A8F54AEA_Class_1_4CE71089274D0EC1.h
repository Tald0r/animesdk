#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B5933CB3A8F54AEA_CLASS_1_4CE71089274D0EC1_METHOD_1_3FFF581F79A26BC7_OFFSET UNITYSDK_OFFSET(0x10B99D60)
#define CLASS_1_B5933CB3A8F54AEA_CLASS_1_4CE71089274D0EC1__CTOR_OFFSET UNITYSDK_OFFSET(0x10B99D50)

inline static constexpr unsigned int Class_1_B5933CB3A8F54AEA_Class_1_4CE71089274D0EC1_TypeDefinitionIndex = 53611;

class Class_1_B5933CB3A8F54AEA_Class_1_4CE71089274D0EC1 : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_CLASS_1_4CE71089274D0EC1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3FFF581F79A26BC7(::System::Collections::Generic::List_1<::Foundation::AssetPath>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_CLASS_1_4CE71089274D0EC1_METHOD_1_3FFF581F79A26BC7_OFFSET))(this, a1);
	}
};
