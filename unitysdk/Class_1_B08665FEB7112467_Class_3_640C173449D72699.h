#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_B08665FEB7112467_CLASS_3_640C173449D72699_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9DF30F0)
#define CLASS_1_B08665FEB7112467_CLASS_3_640C173449D72699_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9DF3160)
#define CLASS_1_B08665FEB7112467_CLASS_3_640C173449D72699_INVOKE_OFFSET UNITYSDK_OFFSET(0x9DF2DB0)
#define CLASS_1_B08665FEB7112467_CLASS_3_640C173449D72699__CTOR_OFFSET UNITYSDK_OFFSET(0x9DF2D90)

inline static constexpr unsigned int Class_1_B08665FEB7112467_Class_3_640C173449D72699_TypeDefinitionIndex = 75477;

class Class_1_B08665FEB7112467_Class_3_640C173449D72699 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_CLASS_3_640C173449D72699__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_CLASS_3_640C173449D72699_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::Int32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_CLASS_3_640C173449D72699_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_CLASS_3_640C173449D72699_ENDINVOKE_OFFSET))(this, a1);
	}
};
