#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/TypeAttributes.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class RuntimeType; }
namespace System { class Type; }
namespace System::Reflection { class RuntimeAssembly; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_02E7E41DEA045AD5_OFFSET UNITYSDK_OFFSET(0x19B09950)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_0AD29C4635C13851_OFFSET UNITYSDK_OFFSET(0x19B09B20)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_1FC0B2F39686D047_OFFSET UNITYSDK_OFFSET(0x19B09920)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_265ECFC30C5B0EEF_OFFSET UNITYSDK_OFFSET(0x19B09500)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_33D58E766C7B00FE_1_OFFSET UNITYSDK_OFFSET(0x19B097E0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_33D58E766C7B00FE_OFFSET UNITYSDK_OFFSET(0x19B09600)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_3ADD64610AC194BA_1_OFFSET UNITYSDK_OFFSET(0x19B09670)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_3ADD64610AC194BA_2_OFFSET UNITYSDK_OFFSET(0x19B09730)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_3ADD64610AC194BA_3_OFFSET UNITYSDK_OFFSET(0x19B09680)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_3ADD64610AC194BA_4_OFFSET UNITYSDK_OFFSET(0x19B097B0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_3ADD64610AC194BA_OFFSET UNITYSDK_OFFSET(0x19B09650)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_410B44FC09D73F6A_OFFSET UNITYSDK_OFFSET(0x19B09840)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_41F560F5C23DB7E4_OFFSET UNITYSDK_OFFSET(0x19B097D0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_4B5CBFE43FBBA4A9_OFFSET UNITYSDK_OFFSET(0x393050)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_4D4E7EACA5CCCAAF_1_OFFSET UNITYSDK_OFFSET(0x19B095B0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_4D4E7EACA5CCCAAF_OFFSET UNITYSDK_OFFSET(0x19B09560)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_4EAC41C8407E0F15_OFFSET UNITYSDK_OFFSET(0x19B09740)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_5331BA00549B687E_OFFSET UNITYSDK_OFFSET(0x8CCA10)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_56B42DCB4C2CE4F6_OFFSET UNITYSDK_OFFSET(0x8CC9F0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_59FD75ABB3EBD456_OFFSET UNITYSDK_OFFSET(0x19B09A30)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_643F02B697786BA6_OFFSET UNITYSDK_OFFSET(0x19B09A90)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_67F6AE7F9001053A_OFFSET UNITYSDK_OFFSET(0x8CCA30)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_713FB278BE4F23BF_OFFSET UNITYSDK_OFFSET(0x19B099F0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_7289B051E4D48AE8_OFFSET UNITYSDK_OFFSET(0x19B096F0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_8D3CAA3E8561FA03_1_OFFSET UNITYSDK_OFFSET(0x19B099C0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_8D3CAA3E8561FA03_2_OFFSET UNITYSDK_OFFSET(0x19B09AF0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_8D3CAA3E8561FA03_OFFSET UNITYSDK_OFFSET(0x19B098D0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_92CF7E0F59557848_OFFSET UNITYSDK_OFFSET(0x223870)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_9BB2E1286B8738B0_1_OFFSET UNITYSDK_OFFSET(0x19B09540)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_9BB2E1286B8738B0_2_OFFSET UNITYSDK_OFFSET(0x19B09900)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_9BB2E1286B8738B0_OFFSET UNITYSDK_OFFSET(0x19B09520)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_B1A5F67F55C20F2A_OFFSET UNITYSDK_OFFSET(0x3074E0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_B79F4C754405332D_OFFSET UNITYSDK_OFFSET(0x19B096A0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_BA96C7EB570C3B63_OFFSET UNITYSDK_OFFSET(0x19B021B0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_C34B2CBA679A9D4C_OFFSET UNITYSDK_OFFSET(0x19B09770)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x2F1F70)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_ED09B2FB0A09B0BE_OFFSET UNITYSDK_OFFSET(0x8CCA20)

namespace System
{
	inline static constexpr unsigned int RuntimeTypeHandle_TypeDefinitionIndex = 409;

	struct alignas(8) RuntimeTypeHandle
	{
		::System::IntPtr value; // 0x10

		::System::Void Method_2_B1A5F67F55C20F2A(::System::IntPtr val)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_B1A5F67F55C20F2A_OFFSET))(this, val);
		}

		::System::Void Method_2_56B42DCB4C2CE4F6(::System::RuntimeType* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_56B42DCB4C2CE4F6_OFFSET))(this, type);
		}

		/*
		::System::Void Method_2_5331BA00549B687E(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_5331BA00549B687E_OFFSET))(this, info, context);
		}
		*/

		::System::IntPtr Method_2_92CF7E0F59557848()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_92CF7E0F59557848_OFFSET))(this);
		}

		/*
		::System::Void Method_2_ED09B2FB0A09B0BE(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_ED09B2FB0A09B0BE_OFFSET))(this, info, context);
		}
		*/

		::System::Boolean Method_2_67F6AE7F9001053A(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_67F6AE7F9001053A_OFFSET))(this, obj);
		}

		::System::Boolean Method_2_4B5CBFE43FBBA4A9(::System::RuntimeTypeHandle handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_4B5CBFE43FBBA4A9_OFFSET))(this, handle);
		}

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		static ::System::Reflection::TypeAttributes Method_2_265ECFC30C5B0EEF(::System::RuntimeType* type)
		{
			return ((::System::Reflection::TypeAttributes(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_265ECFC30C5B0EEF_OFFSET))(type);
		}

		static ::System::Int32 Method_2_9BB2E1286B8738B0(::System::RuntimeType* type)
		{
			return ((::System::Int32(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_9BB2E1286B8738B0_OFFSET))(type);
		}

		static ::System::Int32 Method_2_9BB2E1286B8738B0_1(::System::RuntimeType* type)
		{
			return ((::System::Int32(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_9BB2E1286B8738B0_1_OFFSET))(type);
		}

		static ::System::Type* Method_2_4D4E7EACA5CCCAAF(::System::RuntimeType* type)
		{
			return ((::System::Type*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_4D4E7EACA5CCCAAF_OFFSET))(type);
		}

		static ::System::Type* Method_2_4D4E7EACA5CCCAAF_1(::System::RuntimeType* type)
		{
			return ((::System::Type*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_4D4E7EACA5CCCAAF_1_OFFSET))(type);
		}

		static ::System::Boolean Method_2_33D58E766C7B00FE(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_33D58E766C7B00FE_OFFSET))(type);
		}

		static ::System::Boolean Method_2_B79F4C754405332D(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_B79F4C754405332D_OFFSET))(type);
		}

		static ::System::Boolean Method_2_7289B051E4D48AE8(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_7289B051E4D48AE8_OFFSET))(type);
		}

		static ::System::Boolean Method_2_3ADD64610AC194BA(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_3ADD64610AC194BA_OFFSET))(type);
		}

		static ::System::Boolean Method_2_3ADD64610AC194BA_1(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_3ADD64610AC194BA_1_OFFSET))(type);
		}

		static ::System::Boolean Method_2_3ADD64610AC194BA_2(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_3ADD64610AC194BA_2_OFFSET))(type);
		}

		static ::System::Boolean Method_2_4EAC41C8407E0F15(::System::RuntimeType* type, ::System::Object* o)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_4EAC41C8407E0F15_OFFSET))(type, o);
		}

		static ::System::Boolean Method_2_3ADD64610AC194BA_3(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_3ADD64610AC194BA_3_OFFSET))(type);
		}

		static ::System::Boolean Method_2_C34B2CBA679A9D4C(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_C34B2CBA679A9D4C_OFFSET))(type);
		}

		static ::System::Boolean Method_2_3ADD64610AC194BA_4(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_3ADD64610AC194BA_4_OFFSET))(type);
		}

		static ::System::Boolean Method_2_41F560F5C23DB7E4(::System::RuntimeType* type, ::System::Boolean isGenericCOM)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_41F560F5C23DB7E4_OFFSET))(type, isGenericCOM);
		}

		static ::System::Boolean Method_2_33D58E766C7B00FE_1(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_33D58E766C7B00FE_1_OFFSET))(type);
		}

		static ::System::Boolean Method_2_410B44FC09D73F6A(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_410B44FC09D73F6A_OFFSET))(type);
		}

		static ::System::Boolean Method_2_8D3CAA3E8561FA03(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_8D3CAA3E8561FA03_OFFSET))(type);
		}

		static ::System::Int32 Method_2_9BB2E1286B8738B0_2(::System::RuntimeType* type)
		{
			return ((::System::Int32(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_9BB2E1286B8738B0_2_OFFSET))(type);
		}

		static ::System::Reflection::RuntimeAssembly* Method_2_1FC0B2F39686D047(::System::RuntimeType* type)
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_1FC0B2F39686D047_OFFSET))(type);
		}

		static ::System::RuntimeType* Method_2_02E7E41DEA045AD5(::System::RuntimeType* type)
		{
			return ((::System::RuntimeType*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_02E7E41DEA045AD5_OFFSET))(type);
		}

		static ::System::Reflection::RuntimeModule* Method_2_BA96C7EB570C3B63(::System::RuntimeType* type)
		{
			return ((::System::Reflection::RuntimeModule*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_BA96C7EB570C3B63_OFFSET))(type);
		}

		static ::System::Boolean Method_2_8D3CAA3E8561FA03_1(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_8D3CAA3E8561FA03_1_OFFSET))(type);
		}

		static ::System::RuntimeType* Method_2_713FB278BE4F23BF(::System::RuntimeType* type)
		{
			return ((::System::RuntimeType*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_713FB278BE4F23BF_OFFSET))(type);
		}

		static ::System::Boolean Method_2_59FD75ABB3EBD456(::System::RuntimeType* type, ::System::RuntimeType* target)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_59FD75ABB3EBD456_OFFSET))(type, target);
		}

		static ::System::Boolean Method_2_643F02B697786BA6(::System::Type* a, ::System::Type* b)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_643F02B697786BA6_OFFSET))(a, b);
		}

		static ::System::Boolean Method_2_8D3CAA3E8561FA03_2(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_8D3CAA3E8561FA03_2_OFFSET))(type);
		}

		static ::System::IntPtr Method_2_0AD29C4635C13851(::System::RuntimeType* type)
		{
			return ((::System::IntPtr(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_0AD29C4635C13851_OFFSET))(type);
		}
	};
}
