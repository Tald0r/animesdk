#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_A70F8A7150AD84D9_CLASS_3_C573DFE445EBACB6_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x69A9CC0)
#define CLASS_1_A70F8A7150AD84D9_CLASS_3_C573DFE445EBACB6_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x69A9D30)
#define CLASS_1_A70F8A7150AD84D9_CLASS_3_C573DFE445EBACB6_INVOKE_OFFSET UNITYSDK_OFFSET(0x69A9980)
#define CLASS_1_A70F8A7150AD84D9_CLASS_3_C573DFE445EBACB6__CTOR_OFFSET UNITYSDK_OFFSET(0x69A9970)

inline static constexpr unsigned int Class_1_A70F8A7150AD84D9_Class_3_C573DFE445EBACB6_TypeDefinitionIndex = 45751;

class Class_1_A70F8A7150AD84D9_Class_3_C573DFE445EBACB6 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_A70F8A7150AD84D9_CLASS_3_C573DFE445EBACB6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A70F8A7150AD84D9_CLASS_3_C573DFE445EBACB6_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A70F8A7150AD84D9_CLASS_3_C573DFE445EBACB6_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_A70F8A7150AD84D9_CLASS_3_C573DFE445EBACB6_ENDINVOKE_OFFSET))(this, a1);
	}
};
