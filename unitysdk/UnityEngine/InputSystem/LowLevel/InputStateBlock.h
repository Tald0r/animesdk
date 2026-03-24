#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"

namespace System { class Type; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_COPYTOFROM_OFFSET UNITYSDK_OFFSET(0x8CEC30)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_FLOATTOPRIMITIVEVALUE_OFFSET UNITYSDK_OFFSET(0x8CEBC0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GETPRIMITIVEFORMATFROMTYPE_OFFSET UNITYSDK_OFFSET(0x19C0E6F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GETSIZEOFPRIMITIVEFORMATINBITS_OFFSET UNITYSDK_OFFSET(0x19C0E2C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_ALIGNEDSIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x8CEB50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_BITOFFSET_OFFSET UNITYSDK_OFFSET(0x2EC6E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_BYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x302230)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_EFFECTIVEBITOFFSET_OFFSET UNITYSDK_OFFSET(0x8CEB70)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_EFFECTIVEBYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x8CEB60)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x2F1F70)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_SIZEINBITS_OFFSET UNITYSDK_OFFSET(0x2F6540)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x8CEBE0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READFLOAT_OFFSET UNITYSDK_OFFSET(0x8CEBA0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READINT_OFFSET UNITYSDK_OFFSET(0x8CEB80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_BITOFFSET_OFFSET UNITYSDK_OFFSET(0x3028C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_BYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x302120)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_FORMAT_OFFSET UNITYSDK_OFFSET(0x302300)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_SIZEINBITS_OFFSET UNITYSDK_OFFSET(0x302AB0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEDOUBLE_OFFSET UNITYSDK_OFFSET(0x8CEBF0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEFLOAT_OFFSET UNITYSDK_OFFSET(0x8CEBB0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEINT_OFFSET UNITYSDK_OFFSET(0x8CEB90)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITE_OFFSET UNITYSDK_OFFSET(0x8CEC00)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C10850)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputStateBlock_TypeDefinitionIndex = 28772;

	struct alignas(4) InputStateBlock
	{
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatShort()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4B80);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatFloat()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4B84);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatLong()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4B88);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatDouble()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4B8C);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatInt()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4B90);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatByte()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4B94);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatBit()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4B98);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatSByte()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4B9C);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatQuaternion()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4BA0);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector3Byte()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4BA4);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector2Short()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4BA8);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector2()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4BAC);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatULong()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4BB0);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatUShort()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4BB4);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector3()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4BB8);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatUInt()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4BBC);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector2Byte()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4BC0);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector3Short()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4BC4);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatSBit()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4BC8);
		}
		// static const ::System::UInt32 InvalidOffset = 0xFFFFFFFF; // 0x0
		// static const ::System::UInt32 AutomaticOffset = 0xFFFFFFFE; // 0x0
		// static const ::System::Int32 kFormatBit = 0x42495420; // 0x0
		// static const ::System::Int32 kFormatSBit = 0x53424954; // 0x0
		// static const ::System::Int32 kFormatInt = 0x494E5420; // 0x0
		// static const ::System::Int32 kFormatUInt = 0x55494E54; // 0x0
		// static const ::System::Int32 kFormatShort = 0x53485254; // 0x0
		// static const ::System::Int32 kFormatUShort = 0x55534854; // 0x0
		// static const ::System::Int32 kFormatByte = 0x42595445; // 0x0
		// static const ::System::Int32 kFormatSByte = 0x53425954; // 0x0
		// static const ::System::Int32 kFormatLong = 0x4C4E4720; // 0x0
		// static const ::System::Int32 kFormatULong = 0x554C4E47; // 0x0
		// static const ::System::Int32 kFormatFloat = 0x464C5420; // 0x0
		// static const ::System::Int32 kFormatDouble = 0x44424C20; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC _format_k__BackingField; // 0x10
		::System::UInt32 _byteOffset_k__BackingField; // 0x14
		::System::UInt32 _bitOffset_k__BackingField; // 0x18
		::System::UInt32 _sizeInBits_k__BackingField; // 0x1C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetSizeOfPrimitiveFormatInBits(::UnityEngine::InputSystem::Utilities::FourCC type)
		{
			return ((::System::Int32(*)(::UnityEngine::InputSystem::Utilities::FourCC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GETSIZEOFPRIMITIVEFORMATINBITS_OFFSET))(type);
		}

		static ::UnityEngine::InputSystem::Utilities::FourCC GetPrimitiveFormatFromType(::System::Type* type)
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GETPRIMITIVEFORMATFROMTYPE_OFFSET))(type);
		}

		::UnityEngine::InputSystem::Utilities::FourCC get_format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_FORMAT_OFFSET))(this);
		}

		::System::Void set_format(::UnityEngine::InputSystem::Utilities::FourCC value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::FourCC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_FORMAT_OFFSET))(this, value);
		}

		::System::UInt32 get_byteOffset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_BYTEOFFSET_OFFSET))(this);
		}

		::System::Void set_byteOffset(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_BYTEOFFSET_OFFSET))(this, value);
		}

		::System::UInt32 get_bitOffset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_BITOFFSET_OFFSET))(this);
		}

		::System::Void set_bitOffset(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_BITOFFSET_OFFSET))(this, value);
		}

		::System::UInt32 get_sizeInBits()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_SIZEINBITS_OFFSET))(this);
		}

		::System::Void set_sizeInBits(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_SIZEINBITS_OFFSET))(this, value);
		}

		::System::UInt32 get_alignedSizeInBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_ALIGNEDSIZEINBYTES_OFFSET))(this);
		}

		::System::UInt32 get_effectiveByteOffset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_EFFECTIVEBYTEOFFSET_OFFSET))(this);
		}

		::System::UInt32 get_effectiveBitOffset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_EFFECTIVEBITOFFSET_OFFSET))(this);
		}

		::System::Int32 ReadInt(::System::Void* statePtr)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READINT_OFFSET))(this, statePtr);
		}

		::System::Void WriteInt(::System::Void* statePtr, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEINT_OFFSET))(this, statePtr, value);
		}

		::System::Single ReadFloat(::System::Void* statePtr)
		{
			return ((::System::Single(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READFLOAT_OFFSET))(this, statePtr);
		}

		::System::Void WriteFloat(::System::Void* statePtr, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEFLOAT_OFFSET))(this, statePtr, value);
		}

		/*
		::UnityEngine::InputSystem::Utilities::PrimitiveValue FloatToPrimitiveValue(::System::Single value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_FLOATTOPRIMITIVEVALUE_OFFSET))(this, value);
		}
		*/

		::System::Double ReadDouble(::System::Void* statePtr)
		{
			return ((::System::Double(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READDOUBLE_OFFSET))(this, statePtr);
		}

		::System::Void WriteDouble(::System::Void* statePtr, ::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEDOUBLE_OFFSET))(this, statePtr, value);
		}

		/*
		::System::Void Write(::System::Void* statePtr, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::UnityEngine::InputSystem::Utilities::PrimitiveValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITE_OFFSET))(this, statePtr, value);
		}
		*/

		::System::Void CopyToFrom(::System::Void* toStatePtr, ::System::Void* fromStatePtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_COPYTOFROM_OFFSET))(this, toStatePtr, fromStatePtr);
		}
	};
}
