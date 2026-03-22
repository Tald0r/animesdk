#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_136;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_EC22137A5AE21E1C_2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA48BFC0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_EC22137A5AE21E1C_2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA48BFF0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_EC22137A5AE21E1C_2_INVOKE_OFFSET UNITYSDK_OFFSET(0xA48BA80)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_EC22137A5AE21E1C_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA48BA70)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadVirtualCursor_Class_3_EC22137A5AE21E1C_2_TypeDefinitionIndex = 46108;

	class MonoGamepadVirtualCursor_Class_3_EC22137A5AE21E1C_2 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_EC22137A5AE21E1C_2__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::Class_0_16E4307DCC419505_136* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_136*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_EC22137A5AE21E1C_2_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_136* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_136*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_EC22137A5AE21E1C_2_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_EC22137A5AE21E1C_2_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
