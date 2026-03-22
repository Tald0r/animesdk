#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_COMPARETO_OFFSET UNITYSDK_OFFSET(0x958BE0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x572A20)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x958BD0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x958C00)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x958AD0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x958BC0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1AB10490)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_EQUALITY_2_OFFSET UNITYSDK_OFFSET(0x1AB105D0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1AB10470)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1AB10730)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1AB10760)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1AB10530)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_INEQUALITY_2_OFFSET UNITYSDK_OFFSET(0x1AB10670)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1AB10480)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1AB10710)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_TOLOWER_OFFSET UNITYSDK_OFFSET(0x2CB080)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x886D00)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x958AE0)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int InternedString_TypeDefinitionIndex = 27936;

	struct alignas(8) InternedString
	{
		::System::String* m_StringOriginalCase; // 0x10
		::System::String* m_StringLowerCase; // 0x18

		::System::Void _ctor(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING__CTOR_OFFSET))(this, text);
		}

		::System::Int32 get_length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_GET_LENGTH_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_ISEMPTY_OFFSET))(this);
		}

		::System::String* ToLower()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_TOLOWER_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::UnityEngine::InputSystem::Utilities::InternedString other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 CompareTo(::UnityEngine::InputSystem::Utilities::InternedString other)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_COMPARETO_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::InputSystem::Utilities::InternedString a, ::UnityEngine::InputSystem::Utilities::InternedString b)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::InputSystem::Utilities::InternedString a, ::UnityEngine::InputSystem::Utilities::InternedString b)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_INEQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Equality_1(::UnityEngine::InputSystem::Utilities::InternedString a, ::System::String* b)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_EQUALITY_1_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality_1(::UnityEngine::InputSystem::Utilities::InternedString a, ::System::String* b)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_INEQUALITY_1_OFFSET))(a, b);
		}

		static ::System::Boolean op_Equality_2(::System::String* a, ::UnityEngine::InputSystem::Utilities::InternedString b)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_EQUALITY_2_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality_2(::System::String* a, ::UnityEngine::InputSystem::Utilities::InternedString b)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_INEQUALITY_2_OFFSET))(a, b);
		}

		static ::System::Boolean op_LessThan(::UnityEngine::InputSystem::Utilities::InternedString left, ::UnityEngine::InputSystem::Utilities::InternedString right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_LESSTHAN_OFFSET))(left, right);
		}

		static ::System::Boolean op_GreaterThan(::UnityEngine::InputSystem::Utilities::InternedString left, ::UnityEngine::InputSystem::Utilities::InternedString right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_GREATERTHAN_OFFSET))(left, right);
		}

		static ::System::String* op_Implicit(::UnityEngine::InputSystem::Utilities::InternedString str)
		{
			return ((::System::String*(*)(::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_IMPLICIT_OFFSET))(str);
		}
	};
}
