#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_1_B08665FEB7112467_CLASS_3_039EC88CFCC653F3_2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x69C8B30)
#define CLASS_1_B08665FEB7112467_CLASS_3_039EC88CFCC653F3_2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x69C8B80)
#define CLASS_1_B08665FEB7112467_CLASS_3_039EC88CFCC653F3_2_INVOKE_OFFSET UNITYSDK_OFFSET(0x69C8840)
#define CLASS_1_B08665FEB7112467_CLASS_3_039EC88CFCC653F3_2__CTOR_OFFSET UNITYSDK_OFFSET(0x69C8820)

inline static constexpr unsigned int Class_1_B08665FEB7112467_Class_3_039EC88CFCC653F3_2_TypeDefinitionIndex = 75478;

class Class_1_B08665FEB7112467_Class_3_039EC88CFCC653F3_2 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_CLASS_3_039EC88CFCC653F3_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Invoke(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_CLASS_3_039EC88CFCC653F3_2_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_CLASS_3_039EC88CFCC653F3_2_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::String* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_CLASS_3_039EC88CFCC653F3_2_ENDINVOKE_OFFSET))(this, a1);
	}
};
