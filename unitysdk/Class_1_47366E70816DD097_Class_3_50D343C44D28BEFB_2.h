#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_E885961931F46030;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_47366E70816DD097_CLASS_3_50D343C44D28BEFB_2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8B3D920)
#define CLASS_1_47366E70816DD097_CLASS_3_50D343C44D28BEFB_2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8B3D950)
#define CLASS_1_47366E70816DD097_CLASS_3_50D343C44D28BEFB_2_INVOKE_OFFSET UNITYSDK_OFFSET(0x8B3D680)
#define CLASS_1_47366E70816DD097_CLASS_3_50D343C44D28BEFB_2__CTOR_OFFSET UNITYSDK_OFFSET(0x8B3D660)

inline static constexpr unsigned int Class_1_47366E70816DD097_Class_3_50D343C44D28BEFB_2_TypeDefinitionIndex = 76709;

class Class_1_47366E70816DD097_Class_3_50D343C44D28BEFB_2 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_47366E70816DD097_CLASS_3_50D343C44D28BEFB_2__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_E885961931F46030* Invoke()
	{
		return ((::Class_1_E885961931F46030*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47366E70816DD097_CLASS_3_50D343C44D28BEFB_2_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_47366E70816DD097_CLASS_3_50D343C44D28BEFB_2_BEGININVOKE_OFFSET))(this, a1, a2);
	}

	::Class_1_E885961931F46030* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_1_E885961931F46030*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_47366E70816DD097_CLASS_3_50D343C44D28BEFB_2_ENDINVOKE_OFFSET))(this, a1);
	}
};
