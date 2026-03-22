#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_528600BA1B4E33D2_CLASS_3_039EC88CFCC653F3_2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xD3F7860)
#define CLASS_1_528600BA1B4E33D2_CLASS_3_039EC88CFCC653F3_2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xD3F78B0)
#define CLASS_1_528600BA1B4E33D2_CLASS_3_039EC88CFCC653F3_2_INVOKE_OFFSET UNITYSDK_OFFSET(0xD3F7560)
#define CLASS_1_528600BA1B4E33D2_CLASS_3_039EC88CFCC653F3_2__CTOR_OFFSET UNITYSDK_OFFSET(0xD3F7550)

inline static constexpr unsigned int Class_1_528600BA1B4E33D2_Class_3_039EC88CFCC653F3_2_TypeDefinitionIndex = 40685;

class Class_1_528600BA1B4E33D2_Class_3_039EC88CFCC653F3_2 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_528600BA1B4E33D2_CLASS_3_039EC88CFCC653F3_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_528600BA1B4E33D2_CLASS_3_039EC88CFCC653F3_2_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_528600BA1B4E33D2_CLASS_3_039EC88CFCC653F3_2_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_528600BA1B4E33D2_CLASS_3_039EC88CFCC653F3_2_ENDINVOKE_OFFSET))(this, a1);
	}
};
