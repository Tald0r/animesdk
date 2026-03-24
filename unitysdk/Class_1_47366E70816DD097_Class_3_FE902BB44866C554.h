#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_11A58A840528E5B2;
class Class_1_E146CBB981C64A1C;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_47366E70816DD097_CLASS_3_FE902BB44866C554_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x74C4740)
#define CLASS_1_47366E70816DD097_CLASS_3_FE902BB44866C554_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x74C47B0)
#define CLASS_1_47366E70816DD097_CLASS_3_FE902BB44866C554_INVOKE_OFFSET UNITYSDK_OFFSET(0x74C4110)
#define CLASS_1_47366E70816DD097_CLASS_3_FE902BB44866C554__CTOR_OFFSET UNITYSDK_OFFSET(0x74C40F0)

inline static constexpr unsigned int Class_1_47366E70816DD097_Class_3_FE902BB44866C554_TypeDefinitionIndex = 76710;

class Class_1_47366E70816DD097_Class_3_FE902BB44866C554 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_47366E70816DD097_CLASS_3_FE902BB44866C554__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Invoke(::Class_1_11A58A840528E5B2* a1, ::Class_1_E146CBB981C64A1C* a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_11A58A840528E5B2*, ::Class_1_E146CBB981C64A1C*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_47366E70816DD097_CLASS_3_FE902BB44866C554_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_11A58A840528E5B2* a1, ::Class_1_E146CBB981C64A1C* a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_11A58A840528E5B2*, ::Class_1_E146CBB981C64A1C*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_47366E70816DD097_CLASS_3_FE902BB44866C554_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_47366E70816DD097_CLASS_3_FE902BB44866C554_ENDINVOKE_OFFSET))(this, a1);
	}
};
