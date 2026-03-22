#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E0A05564B7F916C1_Enum_3_61B6B3D4D8E7A2ED.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_E0A05564B7F916C1_CLASS_3_27E9C8019F238D13_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x6C8E380)
#define CLASS_1_E0A05564B7F916C1_CLASS_3_27E9C8019F238D13_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x6C8E3F0)
#define CLASS_1_E0A05564B7F916C1_CLASS_3_27E9C8019F238D13_INVOKE_OFFSET UNITYSDK_OFFSET(0x6C8E090)
#define CLASS_1_E0A05564B7F916C1_CLASS_3_27E9C8019F238D13__CTOR_OFFSET UNITYSDK_OFFSET(0x6C8E080)

inline static constexpr unsigned int Class_1_E0A05564B7F916C1_Class_3_27E9C8019F238D13_TypeDefinitionIndex = 37015;

class Class_1_E0A05564B7F916C1_Class_3_27E9C8019F238D13 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1_CLASS_3_27E9C8019F238D13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_E0A05564B7F916C1_Enum_3_61B6B3D4D8E7A2ED a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E0A05564B7F916C1_Enum_3_61B6B3D4D8E7A2ED))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1_CLASS_3_27E9C8019F238D13_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_E0A05564B7F916C1_Enum_3_61B6B3D4D8E7A2ED a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_E0A05564B7F916C1_Enum_3_61B6B3D4D8E7A2ED, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1_CLASS_3_27E9C8019F238D13_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1_CLASS_3_27E9C8019F238D13_ENDINVOKE_OFFSET))(this, a1);
	}
};
