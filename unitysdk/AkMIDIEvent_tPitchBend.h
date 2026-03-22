#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKMIDIEVENT_TPITCHBEND_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1AF55680)
#define AKMIDIEVENT_TPITCHBEND_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF555C0)
#define AKMIDIEVENT_TPITCHBEND_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AF55610)
#define AKMIDIEVENT_TPITCHBEND_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1AF55550)
#define AKMIDIEVENT_TPITCHBEND_GET_BYVALUELSB_OFFSET UNITYSDK_OFFSET(0x1AF55860)
#define AKMIDIEVENT_TPITCHBEND_GET_BYVALUEMSB_OFFSET UNITYSDK_OFFSET(0x1AF55960)
#define AKMIDIEVENT_TPITCHBEND_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1AF55560)
#define AKMIDIEVENT_TPITCHBEND_SET_BYVALUELSB_OFFSET UNITYSDK_OFFSET(0x1AF557E0)
#define AKMIDIEVENT_TPITCHBEND_SET_BYVALUEMSB_OFFSET UNITYSDK_OFFSET(0x1AF558E0)
#define AKMIDIEVENT_TPITCHBEND__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AF559E0)
#define AKMIDIEVENT_TPITCHBEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF55540)

inline static constexpr unsigned int AkMIDIEvent_tPitchBend_TypeDefinitionIndex = 29948;

class AkMIDIEvent_tPitchBend : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPITCHBEND__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPITCHBEND__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMIDIEvent_tPitchBend* obj)
	{
		return ((::System::IntPtr(*)(::AkMIDIEvent_tPitchBend*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPITCHBEND_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPITCHBEND_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPITCHBEND_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPITCHBEND_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPITCHBEND_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_byValueLsb(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPITCHBEND_SET_BYVALUELSB_OFFSET))(this, value);
	}

	::System::Byte get_byValueLsb()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPITCHBEND_GET_BYVALUELSB_OFFSET))(this);
	}

	::System::Void set_byValueMsb(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPITCHBEND_SET_BYVALUEMSB_OFFSET))(this, value);
	}

	::System::Byte get_byValueMsb()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPITCHBEND_GET_BYVALUEMSB_OFFSET))(this);
	}
};
