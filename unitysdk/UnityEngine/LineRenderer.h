#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LineAlignment.h"
#include "unitysdk/UnityEngine/LineRenderer_SubdivisionMode.h"
#include "unitysdk/UnityEngine/LineTextureMode.h"
#include "unitysdk/UnityEngine/Renderer.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_LINERENDERER_BAKEMESH_1_OFFSET UNITYSDK_OFFSET(0x19D16FA0)
#define UNITYENGINE_LINERENDERER_BAKEMESH_OFFSET UNITYSDK_OFFSET(0x19D16F60)
#define UNITYENGINE_LINERENDERER_GETCOLORGRADIENTCOPY_OFFSET UNITYSDK_OFFSET(0x19D17000)
#define UNITYENGINE_LINERENDERER_GETPOSITIONS_OFFSET UNITYSDK_OFFSET(0x19D17090)
#define UNITYENGINE_LINERENDERER_GETPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x19D16EA0)
#define UNITYENGINE_LINERENDERER_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x19D16E50)
#define UNITYENGINE_LINERENDERER_GETWIDTHCURVECOPY_OFFSET UNITYSDK_OFFSET(0x19D16FC0)
#define UNITYENGINE_LINERENDERER_GETWIDTHMULTIPLIERTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x19D17080)
#define UNITYENGINE_LINERENDERER_GETWIDTHMULTIPLIERTHREAD_OFFSET UNITYSDK_OFFSET(0x19D17070)
#define UNITYENGINE_LINERENDERER_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x19D16F10)
#define UNITYENGINE_LINERENDERER_GET_COLORGRADIENT_OFFSET UNITYSDK_OFFSET(0x19D16FF0)
#define UNITYENGINE_LINERENDERER_GET_ENDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x19D16E10)
#define UNITYENGINE_LINERENDERER_GET_ENDCOLOR_OFFSET UNITYSDK_OFFSET(0x19D16DD0)
#define UNITYENGINE_LINERENDERER_GET_ENDWIDTH_OFFSET UNITYSDK_OFFSET(0x19D16C60)
#define UNITYENGINE_LINERENDERER_GET_GENERATELIGHTINGDATA_OFFSET UNITYSDK_OFFSET(0x19D16ED0)
#define UNITYENGINE_LINERENDERER_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x19D16CF0)
#define UNITYENGINE_LINERENDERER_GET_NUMCAPVERTICES_OFFSET UNITYSDK_OFFSET(0x19D16CB0)
#define UNITYENGINE_LINERENDERER_GET_NUMCORNERVERTICES_OFFSET UNITYSDK_OFFSET(0x19D16C90)
#define UNITYENGINE_LINERENDERER_GET_NUMPOSITIONS_OFFSET UNITYSDK_OFFSET(0x19D16C20)
#define UNITYENGINE_LINERENDERER_GET_POSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x19D16C30)
#define UNITYENGINE_LINERENDERER_GET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x19D16EB0)
#define UNITYENGINE_LINERENDERER_GET_SORTINGFUDGE_OFFSET UNITYSDK_OFFSET(0x19D16F30)
#define UNITYENGINE_LINERENDERER_GET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x19D16DB0)
#define UNITYENGINE_LINERENDERER_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x19D16D70)
#define UNITYENGINE_LINERENDERER_GET_STARTWIDTH_OFFSET UNITYSDK_OFFSET(0x19D16C50)
#define UNITYENGINE_LINERENDERER_GET_SUBDIVISIONDISTANCE_OFFSET UNITYSDK_OFFSET(0x19D16D30)
#define UNITYENGINE_LINERENDERER_GET_SUBDIVISIONMAXPOINTSPERSEGMENT_OFFSET UNITYSDK_OFFSET(0x19D16D50)
#define UNITYENGINE_LINERENDERER_GET_SUBDIVISIONMODE_OFFSET UNITYSDK_OFFSET(0x19D16D10)
#define UNITYENGINE_LINERENDERER_GET_TEXTUREMODE_OFFSET UNITYSDK_OFFSET(0x19D16EF0)
#define UNITYENGINE_LINERENDERER_GET_USEWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x19D16CD0)
#define UNITYENGINE_LINERENDERER_GET_WIDTHCURVE_OFFSET UNITYSDK_OFFSET(0x19D16FB0)
#define UNITYENGINE_LINERENDERER_GET_WIDTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x19D16C70)
#define UNITYENGINE_LINERENDERER_RESETVISIBLELINEPREFABSQUERY_OFFSET UNITYSDK_OFFSET(0x19D17030)
#define UNITYENGINE_LINERENDERER_SETCOLORGRADIENT_OFFSET UNITYSDK_OFFSET(0x19D17020)
#define UNITYENGINE_LINERENDERER_SETCOLORS_OFFSET UNITYSDK_OFFSET(0x19D16BA0)
#define UNITYENGINE_LINERENDERER_SETPOSITIONS_OFFSET UNITYSDK_OFFSET(0x19D170A0)
#define UNITYENGINE_LINERENDERER_SETPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x19D16E40)
#define UNITYENGINE_LINERENDERER_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x19D16E30)
#define UNITYENGINE_LINERENDERER_SETVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x19D16C00)
#define UNITYENGINE_LINERENDERER_SETWIDTHCURVE_OFFSET UNITYSDK_OFFSET(0x19D16FE0)
#define UNITYENGINE_LINERENDERER_SETWIDTHMULTIPLIERTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x19D17060)
#define UNITYENGINE_LINERENDERER_SETWIDTHMULTIPLIERTHREAD_OFFSET UNITYSDK_OFFSET(0x19D17050)
#define UNITYENGINE_LINERENDERER_SETWIDTH_OFFSET UNITYSDK_OFFSET(0x19D16B50)
#define UNITYENGINE_LINERENDERER_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x19D16F20)
#define UNITYENGINE_LINERENDERER_SET_COLORGRADIENT_OFFSET UNITYSDK_OFFSET(0x19D17010)
#define UNITYENGINE_LINERENDERER_SET_ENDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x19D16E20)
#define UNITYENGINE_LINERENDERER_SET_ENDCOLOR_OFFSET UNITYSDK_OFFSET(0x19D16BF0)
#define UNITYENGINE_LINERENDERER_SET_ENDWIDTH_OFFSET UNITYSDK_OFFSET(0x19D16B90)
#define UNITYENGINE_LINERENDERER_SET_GENERATELIGHTINGDATA_OFFSET UNITYSDK_OFFSET(0x19D16EE0)
#define UNITYENGINE_LINERENDERER_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x19D16D00)
#define UNITYENGINE_LINERENDERER_SET_NUMCAPVERTICES_OFFSET UNITYSDK_OFFSET(0x19D16CC0)
#define UNITYENGINE_LINERENDERER_SET_NUMCORNERVERTICES_OFFSET UNITYSDK_OFFSET(0x19D16CA0)
#define UNITYENGINE_LINERENDERER_SET_NUMPOSITIONS_OFFSET UNITYSDK_OFFSET(0x19D16C40)
#define UNITYENGINE_LINERENDERER_SET_POSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x19D16C10)
#define UNITYENGINE_LINERENDERER_SET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x19D16EC0)
#define UNITYENGINE_LINERENDERER_SET_SORTINGFUDGE_OFFSET UNITYSDK_OFFSET(0x19D16F40)
#define UNITYENGINE_LINERENDERER_SET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x19D16DC0)
#define UNITYENGINE_LINERENDERER_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x19D16BE0)
#define UNITYENGINE_LINERENDERER_SET_STARTWIDTH_OFFSET UNITYSDK_OFFSET(0x19D16B80)
#define UNITYENGINE_LINERENDERER_SET_SUBDIVISIONDISTANCE_OFFSET UNITYSDK_OFFSET(0x19D16D40)
#define UNITYENGINE_LINERENDERER_SET_SUBDIVISIONMAXPOINTSPERSEGMENT_OFFSET UNITYSDK_OFFSET(0x19D16D60)
#define UNITYENGINE_LINERENDERER_SET_SUBDIVISIONMODE_OFFSET UNITYSDK_OFFSET(0x19D16D20)
#define UNITYENGINE_LINERENDERER_SET_TEXTUREMODE_OFFSET UNITYSDK_OFFSET(0x19D16F00)
#define UNITYENGINE_LINERENDERER_SET_USEWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x19D16CE0)
#define UNITYENGINE_LINERENDERER_SET_WIDTHCURVE_OFFSET UNITYSDK_OFFSET(0x19D16FD0)
#define UNITYENGINE_LINERENDERER_SET_WIDTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x19D16C80)
#define UNITYENGINE_LINERENDERER_SIMPLIFY_OFFSET UNITYSDK_OFFSET(0x19D16F50)
#define UNITYENGINE_LINERENDERER_VISIBLELINEPREFABSQUERY_OFFSET UNITYSDK_OFFSET(0x19D17040)
#define UNITYENGINE_LINERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D170B0)

namespace UnityEngine
{
	inline static constexpr unsigned int LineRenderer_TypeDefinitionIndex = 5195;

	class LineRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER__CTOR_OFFSET))(this);
		}

		::System::Void SetWidth(::System::Single start, ::System::Single end)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETWIDTH_OFFSET))(this, start, end);
		}

		::System::Void SetColors(::UnityEngine::Color start, ::UnityEngine::Color end)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETCOLORS_OFFSET))(this, start, end);
		}

		::System::Void SetVertexCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETVERTEXCOUNT_OFFSET))(this, count);
		}

		::System::Int32 get_numPositions()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_NUMPOSITIONS_OFFSET))(this);
		}

		::System::Void set_numPositions(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_NUMPOSITIONS_OFFSET))(this, value);
		}

		::System::Single get_startWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_STARTWIDTH_OFFSET))(this);
		}

		::System::Void set_startWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_STARTWIDTH_OFFSET))(this, value);
		}

		::System::Single get_endWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_ENDWIDTH_OFFSET))(this);
		}

		::System::Void set_endWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_ENDWIDTH_OFFSET))(this, value);
		}

		::System::Single get_widthMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_WIDTHMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_widthMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_WIDTHMULTIPLIER_OFFSET))(this, value);
		}

		::System::Int32 get_numCornerVertices()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_NUMCORNERVERTICES_OFFSET))(this);
		}

		::System::Void set_numCornerVertices(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_NUMCORNERVERTICES_OFFSET))(this, value);
		}

		::System::Int32 get_numCapVertices()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_NUMCAPVERTICES_OFFSET))(this);
		}

		::System::Void set_numCapVertices(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_NUMCAPVERTICES_OFFSET))(this, value);
		}

		::System::Boolean get_useWorldSpace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_USEWORLDSPACE_OFFSET))(this);
		}

		::System::Void set_useWorldSpace(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_USEWORLDSPACE_OFFSET))(this, value);
		}

		::System::Boolean get_loop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_LOOP_OFFSET))(this);
		}

		::System::Void set_loop(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_LOOP_OFFSET))(this, value);
		}

		::UnityEngine::LineRenderer_SubdivisionMode get_subdivisionMode()
		{
			return ((::UnityEngine::LineRenderer_SubdivisionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_SUBDIVISIONMODE_OFFSET))(this);
		}

		::System::Void set_subdivisionMode(::UnityEngine::LineRenderer_SubdivisionMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LineRenderer_SubdivisionMode))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_SUBDIVISIONMODE_OFFSET))(this, value);
		}

		::System::Int32 get_subdivisionDistance()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_SUBDIVISIONDISTANCE_OFFSET))(this);
		}

		::System::Void set_subdivisionDistance(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_SUBDIVISIONDISTANCE_OFFSET))(this, value);
		}

		::System::Int32 get_subdivisionMaxPointsPerSegment()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_SUBDIVISIONMAXPOINTSPERSEGMENT_OFFSET))(this);
		}

		::System::Void set_subdivisionMaxPointsPerSegment(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_SUBDIVISIONMAXPOINTSPERSEGMENT_OFFSET))(this, value);
		}

		::UnityEngine::Color get_startColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_STARTCOLOR_OFFSET))(this);
		}

		::System::Void set_startColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_STARTCOLOR_OFFSET))(this, value);
		}

		::UnityEngine::Color get_endColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_ENDCOLOR_OFFSET))(this);
		}

		::System::Void set_endColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_ENDCOLOR_OFFSET))(this, value);
		}

		::System::Int32 get_positionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_POSITIONCOUNT_OFFSET))(this);
		}

		::System::Void set_positionCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_POSITIONCOUNT_OFFSET))(this, value);
		}

		::System::Void SetPosition(::System::Int32 index, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETPOSITION_OFFSET))(this, index, position);
		}

		::UnityEngine::Vector3 GetPosition(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GETPOSITION_OFFSET))(this, index);
		}

		::System::Single get_shadowBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_SHADOWBIAS_OFFSET))(this);
		}

		::System::Void set_shadowBias(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_SHADOWBIAS_OFFSET))(this, value);
		}

		::System::Boolean get_generateLightingData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_GENERATELIGHTINGDATA_OFFSET))(this);
		}

		::System::Void set_generateLightingData(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_GENERATELIGHTINGDATA_OFFSET))(this, value);
		}

		::UnityEngine::LineTextureMode get_textureMode()
		{
			return ((::UnityEngine::LineTextureMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_TEXTUREMODE_OFFSET))(this);
		}

		::System::Void set_textureMode(::UnityEngine::LineTextureMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LineTextureMode))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_TEXTUREMODE_OFFSET))(this, value);
		}

		::UnityEngine::LineAlignment get_alignment()
		{
			return ((::UnityEngine::LineAlignment(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_ALIGNMENT_OFFSET))(this);
		}

		::System::Void set_alignment(::UnityEngine::LineAlignment value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LineAlignment))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_ALIGNMENT_OFFSET))(this, value);
		}

		::System::Single get_sortingFudge()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_SORTINGFUDGE_OFFSET))(this);
		}

		::System::Void set_sortingFudge(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_SORTINGFUDGE_OFFSET))(this, value);
		}

		::System::Void Simplify(::System::Single tolerance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SIMPLIFY_OFFSET))(this, tolerance);
		}

		::System::Void BakeMesh(::UnityEngine::Mesh* mesh, ::System::Boolean useTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_BAKEMESH_OFFSET))(this, mesh, useTransform);
		}

		::System::Void BakeMesh_1(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, ::System::Boolean useTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_BAKEMESH_1_OFFSET))(this, mesh, camera, useTransform);
		}

		::UnityEngine::AnimationCurve* get_widthCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_WIDTHCURVE_OFFSET))(this);
		}

		::System::Void set_widthCurve(::UnityEngine::AnimationCurve* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_WIDTHCURVE_OFFSET))(this, value);
		}

		::UnityEngine::Gradient* get_colorGradient()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_COLORGRADIENT_OFFSET))(this);
		}

		::System::Void set_colorGradient(::UnityEngine::Gradient* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_COLORGRADIENT_OFFSET))(this, value);
		}

		::UnityEngine::AnimationCurve* GetWidthCurveCopy()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GETWIDTHCURVECOPY_OFFSET))(this);
		}

		::System::Void SetWidthCurve(::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETWIDTHCURVE_OFFSET))(this, curve);
		}

		::UnityEngine::Gradient* GetColorGradientCopy()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GETCOLORGRADIENTCOPY_OFFSET))(this);
		}

		::System::Void SetColorGradient(::UnityEngine::Gradient* curve)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETCOLORGRADIENT_OFFSET))(this, curve);
		}

		static ::System::Void ResetVisibleLinePrefabsQuery()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_RESETVISIBLELINEPREFABSQUERY_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::GameObject*>* VisibleLinePrefabsQuery()
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_VISIBLELINEPREFABSQUERY_OFFSET))();
		}

		::System::Void SetWidthMultiplierThread(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETWIDTHMULTIPLIERTHREAD_OFFSET))(this, v);
		}

		::System::Single GetWidthMultiplierThread()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GETWIDTHMULTIPLIERTHREAD_OFFSET))(this);
		}

		static ::System::Void SetWidthMultiplierThreadInternal(::UnityEngine::LineRenderer* self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::LineRenderer*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETWIDTHMULTIPLIERTHREADINTERNAL_OFFSET))(self, value);
		}

		static ::System::Single GetWidthMultiplierThreadInternal(::UnityEngine::LineRenderer* self)
		{
			return ((::System::Single(*)(::UnityEngine::LineRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GETWIDTHMULTIPLIERTHREADINTERNAL_OFFSET))(self);
		}

		::System::Int32 GetPositions(::Il2CppArray<::UnityEngine::Vector3>* positions)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GETPOSITIONS_OFFSET))(this, positions);
		}

		::System::Void SetPositions(::Il2CppArray<::UnityEngine::Vector3>* positions)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETPOSITIONS_OFFSET))(this, positions);
		}

		::System::Void get_startColor_Injected(::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_STARTCOLOR_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_startColor_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_STARTCOLOR_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_endColor_Injected(::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_ENDCOLOR_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_endColor_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_ENDCOLOR_INJECTED_OFFSET))(this, value);
		}

		::System::Void SetPosition_Injected(::System::Int32 index, ::UnityEngine::Vector3& position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETPOSITION_INJECTED_OFFSET))(this, index, position);
		}

		::System::Void GetPosition_Injected(::System::Int32 index, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GETPOSITION_INJECTED_OFFSET))(this, index, ret);
		}
	};
}
