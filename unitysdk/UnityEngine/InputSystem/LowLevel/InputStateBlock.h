#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"

namespace System { class Type; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_COPYTOFROM_OFFSET UNITYSDK_OFFSET(0x8B0E40)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_FLOATTOPRIMITIVEVALUE_OFFSET UNITYSDK_OFFSET(0x8B0DD0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GETPRIMITIVEFORMATFROMTYPE_OFFSET UNITYSDK_OFFSET(0x1979DDC0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GETSIZEOFPRIMITIVEFORMATINBITS_OFFSET UNITYSDK_OFFSET(0x1979D990)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_ALIGNEDSIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x8B0D60)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_BITOFFSET_OFFSET UNITYSDK_OFFSET(0x2C6230)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_BYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x2D38E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_EFFECTIVEBITOFFSET_OFFSET UNITYSDK_OFFSET(0x8B0D80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_EFFECTIVEBYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x8B0D70)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_SIZEINBITS_OFFSET UNITYSDK_OFFSET(0x2C50B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x8B0DF0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READFLOAT_OFFSET UNITYSDK_OFFSET(0x8B0DB0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READINT_OFFSET UNITYSDK_OFFSET(0x8B0D90)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_BITOFFSET_OFFSET UNITYSDK_OFFSET(0x2C6250)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_BYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x2D38F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_FORMAT_OFFSET UNITYSDK_OFFSET(0x2D3600)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_SIZEINBITS_OFFSET UNITYSDK_OFFSET(0x3084B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEDOUBLE_OFFSET UNITYSDK_OFFSET(0x8B0E00)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEFLOAT_OFFSET UNITYSDK_OFFSET(0x8B0DC0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEINT_OFFSET UNITYSDK_OFFSET(0x8B0DA0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITE_OFFSET UNITYSDK_OFFSET(0x8B0E10)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1979FF20)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputStateBlock_TypeDefinitionIndex = 27832;

	struct alignas(4) InputStateBlock
	{
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatULong()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4BD0);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector2Byte()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4BD4);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatShort()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4BD8);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector2()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4BDC);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatFloat()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4BE0);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector3Short()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4BE4);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector3Byte()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4BE8);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatQuaternion()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4BEC);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatLong()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4BF0);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatSByte()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4BF4);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatUShort()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4BF8);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatDouble()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4BFC);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatInt()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4C00);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatUInt()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4C04);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatSBit()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4C08);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatByte()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4C0C);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector2Short()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4C10);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatBit()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4C14);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector3()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x4C18);
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
