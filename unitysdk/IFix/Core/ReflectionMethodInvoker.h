#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/Call.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class VirtualMachine; }
namespace System { class Type; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MethodBase; }

#define IFIX_CORE_REFLECTIONMETHODINVOKER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1991AD10)
#define IFIX_CORE_REFLECTIONMETHODINVOKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1991A670)

namespace IFix::Core
{
	inline static constexpr unsigned int ReflectionMethodInvoker_TypeDefinitionIndex = 6804;

	class ReflectionMethodInvoker : public ::System::Object
	{
	public:
		::System::Reflection::ConstructorInfo* ctor; // 0x10
		::Il2CppArray<::System::Boolean>* refFlags; // 0x18
		::Il2CppArray<::System::Type*>* rawTypes; // 0x20
		::Il2CppArray<::System::Boolean>* outFlags; // 0x28
		::System::Type* returnType; // 0x30
		::System::Reflection::MethodBase* method; // 0x38
		::System::Boolean isValueTypeInstance; // 0x40
		::System::Boolean hasThis; // 0x41
		::System::Boolean isNullableGetValueOrDefault; // 0x42
		::System::Boolean hasReturn; // 0x43
		::System::Boolean isNullableValue; // 0x44
		::System::Boolean isNullableHasValue; // 0x45
		::System::Int32 paramCount; // 0x48

		::System::Void _ctor(::System::Reflection::MethodBase* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + IFIX_CORE_REFLECTIONMETHODINVOKER__CTOR_OFFSET))(this, method);
		}

		::System::Void Invoke(::IFix::Core::VirtualMachine* virtualMachine, ::IFix::Core::Call& call, ::System::Boolean isInstantiate)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::IFix::Core::Call&, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_CORE_REFLECTIONMETHODINVOKER_INVOKE_OFFSET))(this, virtualMachine, call, isInstantiate);
		}
	};
}
