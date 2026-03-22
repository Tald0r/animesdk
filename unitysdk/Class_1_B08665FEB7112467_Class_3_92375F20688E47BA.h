#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_B08665FEB7112467_CLASS_3_92375F20688E47BA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x5DD9630)
#define CLASS_1_B08665FEB7112467_CLASS_3_92375F20688E47BA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x5DD96C0)
#define CLASS_1_B08665FEB7112467_CLASS_3_92375F20688E47BA_INVOKE_OFFSET UNITYSDK_OFFSET(0x5DD92B0)
#define CLASS_1_B08665FEB7112467_CLASS_3_92375F20688E47BA__CTOR_OFFSET UNITYSDK_OFFSET(0x5DD92A0)

inline static constexpr unsigned int Class_1_B08665FEB7112467_Class_3_92375F20688E47BA_TypeDefinitionIndex = 38618;

class Class_1_B08665FEB7112467_Class_3_92375F20688E47BA : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_CLASS_3_92375F20688E47BA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_CLASS_3_92375F20688E47BA_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_CLASS_3_92375F20688E47BA_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_CLASS_3_92375F20688E47BA_ENDINVOKE_OFFSET))(this, a1);
	}
};
