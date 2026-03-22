#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

class Class_1_3F25D73453EF6AE1;
class Class_1_FD94529AEC23BBED_Class_1_7F887305F1FA7173;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FD94529AEC23BBED_METHOD_1_6BAE34C717407C75_OFFSET UNITYSDK_OFFSET(0x1A9AD6B0)
#define CLASS_1_FD94529AEC23BBED_METHOD_1_7C5833C04DA1B77C_OFFSET UNITYSDK_OFFSET(0x1A9AD8D0)
#define CLASS_1_FD94529AEC23BBED_METHOD_1_9CCE97C96EF434EE_OFFSET UNITYSDK_OFFSET(0x1A9AD850)
#define CLASS_1_FD94529AEC23BBED_METHOD_1_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x1A9AD9E0)
#define CLASS_1_FD94529AEC23BBED__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9AD650)

inline static constexpr unsigned int Class_1_FD94529AEC23BBED_TypeDefinitionIndex = 7820;

class Class_1_FD94529AEC23BBED : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_FD94529AEC23BBED_Class_1_7F887305F1FA7173*>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FD94529AEC23BBED__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_FD94529AEC23BBED* Method_1_6BAE34C717407C75(::System::Int32 a1)
	{
		return ((::Class_1_FD94529AEC23BBED*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FD94529AEC23BBED_METHOD_1_6BAE34C717407C75_OFFSET))(a1);
	}

	::System::Void Method_1_9CCE97C96EF434EE(::UnityEngine::Rect a1, ::Class_1_3F25D73453EF6AE1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::Class_1_3F25D73453EF6AE1*))((::PBYTE)hIl2Cpp + CLASS_1_FD94529AEC23BBED_METHOD_1_9CCE97C96EF434EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7C5833C04DA1B77C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FD94529AEC23BBED_METHOD_1_7C5833C04DA1B77C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD94529AEC23BBED_METHOD_1_CCFD131833AE484B_OFFSET))(this);
	}
};
