#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Threading { class SynchronizationContext; }

#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_INITPLAY_OFFSET UNITYSDK_OFFSET(0x1A0DA620)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x1A0DA970)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x1A0DAAC0)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1A0DA7E0)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_8275984A55692A0F_OFFSET UNITYSDK_OFFSET(0x1A0DA930)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_8E66B82298267DC3_OFFSET UNITYSDK_OFFSET(0x1A0D1A80)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_E67B8EE7D04609D0_OFFSET UNITYSDK_OFFSET(0x1A0DA9B0)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x1A0DA660)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_F39234F2606D8D97_OFFSET UNITYSDK_OFFSET(0x1A0DA820)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1A0DA8F0)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_RESETSTATICS_OFFSET UNITYSDK_OFFSET(0x1A0DA590)

namespace BinaryBundleLib::Runtime
{
	inline static constexpr unsigned int ThreadHelper_TypeDefinitionIndex = 31809;

	class ThreadHelper : public ::System::Object
	{
	public:
		static ::System::Threading::SynchronizationContext** StaticGet_Field_1_1()
		{
			return (::System::Threading::SynchronizationContext**)Il2CppClass::FromTypeDefinitionIndex(ThreadHelper_TypeDefinitionIndex)->GetStaticField(0x25020);
		}
		static ::System::String** StaticGet_Field_1_3()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ThreadHelper_TypeDefinitionIndex)->GetStaticField(0x25028);
		}
		static ::System::String** StaticGet_Field_1_2()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ThreadHelper_TypeDefinitionIndex)->GetStaticField(0x25030);
		}
		static ::System::String** StaticGet_Field_1_4()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ThreadHelper_TypeDefinitionIndex)->GetStaticField(0x25038);
		}
		static ::System::Int32* StaticGet_Field_1_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ThreadHelper_TypeDefinitionIndex)->GetStaticField(0x7CB0);
		}

		static ::System::Void ResetStatics()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_RESETSTATICS_OFFSET))();
		}

		static ::System::Void InitPlay()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_INITPLAY_OFFSET))();
		}

		static ::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_128774387667156B_OFFSET))();
		}

		static ::System::Void Method_1_8E66B82298267DC3(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_8E66B82298267DC3_OFFSET))(a1);
		}

		static ::System::Int32 Method_1_F5599B7DA8E7E53C()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_F5599B7DA8E7E53C_OFFSET))();
		}

		static ::System::Boolean Method_1_F39234F2606D8D97()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_F39234F2606D8D97_OFFSET))();
		}

		static ::System::Threading::SynchronizationContext* Method_1_8275984A55692A0F()
		{
			return ((::System::Threading::SynchronizationContext*(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_8275984A55692A0F_OFFSET))();
		}

		static ::System::String* Method_1_128774387667156B_1()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_128774387667156B_1_OFFSET))();
		}

		static ::System::Void Method_1_E67B8EE7D04609D0(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_E67B8EE7D04609D0_OFFSET))(a1);
		}

		static ::System::String* Method_1_128774387667156B_2()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_128774387667156B_2_OFFSET))();
		}

		static ::System::Void Method_1_E7EF6BC52B28648C()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_E7EF6BC52B28648C_OFFSET))();
		}
	};
}
