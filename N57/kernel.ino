/* The <ansi.h> header attempts to decide whether the compiler has enough
 * conformance to Standard C for Minix to take advantage of.  If so, the
 * symbol _ANSI is defined (as 31459).  Otherwise _ANSI is not defined
 * here, but it may be defined by applications that want to bend the rules.
 * The magic number in the definition is to inhibit unnecessary bending
 * of the rules.  (For consistency with the new '#ifdef _ANSI" tests in
 * the headers, _ANSI should really be defined as nothing, but that would
 * break many library routines that use "#if _ANSI".)

 * If _ANSI ends up being defined, a macro
 *
 *	_PROTOTYPE(function, params)
 *
 * is defined.  This macro expands in different ways, generating either
 * ANSI Standard C prototypes or old-style K&R (Kernighan & Ritchie)
 * prototypes, as needed.  Finally, some programs use _CONST, _VOIDSTAR etc
 * in such a way that they are portable over both ANSI and K&R compilers.
 * The appropriate macros are defined here.
 */

#ifndef _ANSI_H
#define _ANSI_H

#if __STDC__ == 1
#define _ANSI		31459	/* compiler claims full ANSI conformance */
#endif

#ifdef __GNUC__
#define _ANSI		31459	/* gcc conforms enough even in non-ANSI mode */
#endif

#ifdef _ANSI

/* Keep everything for ANSI prototypes. */
#define	_PROTOTYPE(function, params)	function params
#define	_ARGS(params)			params

#define	_VOIDSTAR	void *
#define	_VOID		void
#define	_CONST		const
#define	_VOLATILE	volatile
#define _SIZET		size_t

#else

/* Throw away the parameters for K&R prototypes. */
#define	_PROTOTYPE(function, params)	function()
#define	_ARGS(params)			()

#define	_VOIDSTAR	void *
#define	_VOID		void
#define	_CONST
#define	_VOLATILE
#define _SIZET		int

#endif /* _ANSI */

/* This should be defined as restrict when a C99 compiler is used. */
#define _RESTRICT

/* Setting any of _MINIX, _POSIX_C_SOURCE or _POSIX2_SOURCE implies
 * _POSIX_SOURCE.  (Seems wrong to put this here in ANSI space.)
 */
#if defined(_MINIX) || _POSIX_C_SOURCE > 0 || defined(_POSIX2_SOURCE)
#undef _POSIX_SOURCE
#define _POSIX_SOURCE	1
#endif

#endif /* ANSI_H */
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        ﻿<?xml version="1.0" encoding="utf-8"?>
<asmv1:assembly xsi:schemaLocation="urn:schemas-microsoft-com:asm.v1 assembly.adaptive.xsd" manifestVersion="1.0" xmlns:asmv3="urn:schemas-microsoft-com:asm.v3" xmlns:dsig="http://www.w3.org/2000/09/xmldsig#" xmlns="urn:schemas-microsoft-com:asm.v2" xmlns:asmv1="urn:schemas-microsoft-com:asm.v1" xmlns:asmv2="urn:schemas-microsoft-com:asm.v2" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:co.v1="urn:schemas-microsoft-com:clickonce.v1">
  <asmv1:assemblyIdentity name="monWiiServer.exe" version="1.0.0.0" publicKeyToken="0000000000000000" language="neutral" processorArchitecture="msil" type="win32" />
  <description asmv2:iconFile="wiiflash.ico" xmlns="urn:schemas-microsoft-com:asm.v1" />
  <application />
  <entryPoint>
    <assemblyIdentity name="monWiiServer" version="0.0.0.0" language="neutral" processorArchitecture="msil" />
    <commandLine file="monWiiServer.exe" parameters="" />
  </entryPoint>
  <trustInfo>
    <security>
      <applicationRequestMinimum>
        <PermissionSet Unrestricted="true" ID="Custom" SameSite="site" />
        <defaultAssemblyRequest permissionSetReference="Custom" />
      </applicationRequestMinimum>
      <requestedPrivileges xmlns="urn:schemas-microsoft-com:asm.v3">
        <!--
          UAC Manifest Options
          If you want to change the Windows User Account Control level replace the 
          requestedExecutionLevel node with one of the following.

        <requestedExecutionLevel  level="asInvoker" />
        <requestedExecutionLevel  level="requireAdministrator" />
        <requestedExecutionLevel  level="highestAvailable" />

         If you want to utilize File and Registry Virtualization for backward 
         compatibility then delete the requestedExecutionLevel node.
    -->
        <requestedExecutionLevel level="asInvoker" />
      </requestedPrivileges>
    </security>
  </trustInfo>
  <dependency>
    <dependentOS>
      <osVersionInfo>
        <os majorVersion="5" minorVersion="1" buildNumber="2600" servicePackMajor="0" />
      </osVersionInfo>
    </dependentOS>
  </dependency>
  <dependency>
    <dependentAssembly dependencyType="preRequisite" allowDelayedBinding="true">
      <assemblyIdentity name="Microsoft.Windows.CommonLanguageRuntime" version="2.0.50727.0" />
    </dependentAssembly>
  </dependency>
  <dependency>
    <dependentAssembly dependencyType="preRequisite" allowDelayedBinding="true">
      <assemblyIdentity name="WindowsBase" version="3.0.0.0" publicKeyToken="31bf3856ad364e35" language="neutral" processorArchitecture="msil" />
    </dependentAssembly>
  </dependency>
  <dependency>
    <dependentAssembly dependencyType="install" allowDelayedBinding="true" codebase="monWiiServer.exe" size="1300480">
      <assemblyIdentity name="monWiiServer" version="0.0.0.0" language="neutral" processorArchitecture="msil" />
      <hash>
        <dsig:Transforms>
          <dsig:Transform Algorithm="urn:schemas-microsoft-com:HashTransforms.Identity" />
        </dsig:Transforms>
        <dsig:DigestMethod Algorithm="http://www.w3.org/2000/09/xmldsig#sha1" />
        <dsig:DigestValue>OzgLOWlXIm3g4mjHyOHzabvfGRs=</dsig:DigestValue>
      </hash>
    </dependentAssembly>
  </dependency>
  <file name="wiiflash.ico" size="99678">
    <hash>
      <dsig:Transforms>
        <dsig:Transform Algorithm="urn:schemas-microsoft-com:HashTransforms.Identity" />
      </dsig:Transforms>
      <dsig:DigestMethod Algorithm="http://www.w3.org/2000/09/xmldsig#sha1" />
      <dsig:DigestValue>KCdPNr+uRSHp7G9EAJV7Ez8qXrw=</dsig:DigestValue>
    </hash>
  </file>
</asmv1:assembly>                                                                                                                                                                                                                                                                                                                                                                                                     /*
Copyright (c) 2007 Joa Ebert and Thibault Imbert

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
package org.wiiflash.utils
{
	import flash.events.Event;
	import flash.events.EventDispatcher;
	import flash.events.IEventDispatcher;
	
	import org.wiiflash.events.PeakEvent;
	
	/**
	 * Dispatched when a peak has been detected.
	 * 
 	 * @eventType org.wiiflash.events.PeakEvent.PEAK
  	 */	
	[Event(name='peak', type='org.wiiflash.events.PeakEvent')]
	
	/**
	 * The HistoryPeakDetection class is analyzing a set of values to detect peaks inside.
	 * 
	 * A peak is detected if current value is greater than average value of history values
	 * multiplied by given <code>historyMultiplier</code>.
	 * 
	 * Also the current value can be interpolated using <code>valueCount</code> greater than
	 * one. If this is the case the current value is the average of given values. This average
	 * value will be put into the history afterwards.
	 * 
	 * @author Joa Ebert
	 * @author Thibault Imbert
	 */	
	public final class HistoryPeakDetection implements IEventDispatcher
	{
		private var historyCount:int;
		private var valueCount:int;
		
		private var values:Array;
		private var history:Array;
		
		private var valueDivide:Number;
		private var historyDivide:Number;
		private var historyMultiplier:Number;
				
		private var eventDispatcher:EventDispatcher;
		
		private var lastPeak:Boolean;
		
		/**
		 * Creates a new HistoryPeakDetection object.
		 * 
		 * @param valueCount Number of values that build current value.
		 * @param historyCount Number of values that are stored in the history.
		 * @param historyMultiplier Multiplier for average value of history.
		 */		
		public function HistoryPeakDetection( valueCount:int = 2, historyCount:int = 32, historyMultiplier:Number = 16 )
		{
			var i:int;
			
			lastPeak = false;
			
			eventDispatcher = new EventDispatcher;
			
			values = new Array( this.valueCount = valueCount );
			history = new Array( this.historyCount = historyCount );
			
			valueDivide = 1 / valueCount;
			historyDivide = 1 / historyCount;
			this.historyMultiplier = historyMultiplier;
						
			for ( i = 0; i < valueCount; i++ )
			{
				values[ i ] = 0;
			}
			
			for ( i = 0; i < historyCount; i++ )
			{
				history[ i ] = 0;
			}
		}
		
		/**
		 * Adds a value to the HistoryPeakDetection object.
		 * Whenever a value is added the check to detect a peak is done.
		 * 
		 * @param value The new value.
		 * @return <code>true</code> if peak has been detected; <code>false</code> otherwise.
		 */		
		public function addValue( value:Number ):Boolean
		{
			var i:int;
			var peak:Boolean;
			
			var meanValue:Number = 0;
			var meanHistory:Number = 0;
			
			values.shift();
			values.push( value );
			
			for ( i = 0; i < valueCount; i++ )
			{
				meanValue += values[ i ] as Number;
			}
			
			for ( i = 0; i < historyCount; i++ )
			{
				meanHistory += history[ i ] as Number;
			}
			
			meanValue *= valueDivide;
			meanHistory *= historyDivide;
			
			history.shift();
			history.push( meanValue );
			
			if ( meanValue > 0 )
				peak = ( meanValue - ( meanHistory * historyMultiplier ) ) > 0;
			else
				peak = ( meanValue + ( meanHistory * historyMultiplier ) ) < 0;
			
			if ( peak && !lastPeak )
			{
				eventDispatcher.dispatchEvent( new PeakEvent );
			}
			
			return lastPeak = peak;
		}
		
		/**
		 * Returns the string representation of the specified object.
		 * 
		 * @return A string representation of the object.  
		 */		
		public function toString():String
		{
			return '[HistoryPeakDetection valueCount:' + valueCount + ', historyCount:' + historyCount + ', historyMultiplier:' + historyMultiplier + ']';
		}
		
		//-----------------------------------------------------------------------------------
		// IEventDispatcher
		//-----------------------------------------------------------------------------------
		
		/**
		 * Registers an event listener object with a HistoryPeakDetection object so that the listener receives notification of an event.
		 * 
		 * @param type The type of event.
		 * @param listener The listener function that processes the event.
		 * @param useCapture Determines whether the listener works in the capture phase or the target and bubbling phases.
		 * @param priority The priority level of the event listener.
		 * @param useWeakReference Determines whether the reference to the listener is strong or weak.
		 * 
		 * @see http://livedocs.adobe.com/flex/2/langref/flash/events/IEventDispatcher.html#addEventListener() flash.events.IEventDispatcher.addEventListener()
		 */	
		public function addEventListener( type:String, listener:Function, useCapture:Boolean = false, priority:int = 0, useWeakReference:Boolean = false ):void 
		{
			eventDispatcher.addEventListener( type, listener, useCapture, priority, useWeakReference );
		}

		/**
		 * Dispatches an event into the event flow.
		 * 
		 * @param event The Event object dispatched into the event flow.
		 * 
		 * @see http://livedocs.adobe.com/flex/2/langref/flash/events/IEventDispatcher.html#dispatchEvent() flash.events.IEventDispatcher.dispatchEvent()
		 */
		public function dispatchEvent( event:Event ):Boolean
		{
			return eventDispatcher.dispatchEvent( event );
		}
		
		/**
		 * Checks whether the HistoryPeakDetection object has any listeners registered for a specific type of event.
		 * 
		 * @param type The type of event.
		 * @return A value of <code>true</code> if a listener of the specified type is registered; <code>false</code> otherwise.
		 * 
		 * @see http://livedocs.adobe.com/flex/2/langref/flash/events/IEventDispatcher.html#hasEventListener() flash.events.IEventDispatcher.hasEventListener()
		 */	
		public function hasEventListener( type:String ):Boolean
		{
			return eventDispatcher.hasEventListener( type );
		}
		
		/**
		 * Removes a listener from the HistoryPeakDetection object.
		 * 
		 * @param type The type of event.
		 * @param listener The listener object to remove.
		 * @param useCapture Specifies whether the listener was registered for the capture phase or the target and bubbling phases.
		 * 
		 * @see http://livedocs.adobe.com/flex/2/langref/flash/events/IEventDispatcher.html#removeEventListener() flash.events.IEventDispatcher.removeEventListener()
		 */	
		public function removeEventListener( type:String, listener:Function, useCapture:Boolean = false ):void
		{
			eventDispatcher.removeEventListener( type, listener, useCapture );
		}
		
		/**
		 * Checks whether an event listener is registered with this HistoryPeakDetection object or any of its ancestors for the specified event type.
		 * 
		 * @param type The type of event.
		 * @return A value of <code>true</code> if a listener of the specified type will be triggered; <code>false</code> otherwise.
		 * 
		 * @see http://livedocs.adobe.com/flex/2/langref/flash/events/IEventDispatcher.html#willTrigger() flash.events.IEventDispatcher.willTrigger()
		 */
		public function willTrigger( type:String ):Boolean
		{
			return eventDispatcher.willTrigger( type );
		}
	}
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           CWS�W x�|�X\Ͳ6:8��$8C��������I 8���K��݂���������s�j�YS���۵�W��� �� �Ѐ��7�~}}F��B���^˦FFF���[}P=(��5?$_�B���k��C��%�f+z�ؽ�%������h��%�Zy��!��И,������<?|��c��z�	$��,��6����� @�+���xc�( �PbP��O ��L�c�UC���3#��y`����|�9�_z�7L�����
�/E��l�����T��	�X@�3C�������+�5�of��_SV�/����o�Y#���-^[�(0� :,�1��c����7�g�D�$�U������݆�o������'8O���D��T�/}_é�7T���_s���ot�f�/8����on�ǒ����b�{s���y���_�z���I ?�����_��ߐ7�������
�i]����r%�w8aS��_Nt���|������{W�_��pK�m���x��2�1&�C�S���)�XN�!Sh�����Z��.��"���}Eb� �݇�ȴoZ8<<��2|���@����������  �h��,|$������뿳�a����0L5 �5�psq7H��٩����; T݌]�4�M\�����]�M��eͽ����흌ݬM���ݼ���
�o kc���ۛ��{˙{��썽����?��n�n�v �,�E�T�� iHo����d�K� @�����Dh�� �0����$XD�Y$-xD���`�����i�o^b�48 ��[ �����-�f[b�@� i(���韬w*x��J������0��~�?���_0 ������	x/#!-�zc`���� 0>���z�.
��E�z@1s41�u�]�+�/ ��W`�~aa�^�`�
<�?���V@x$�wP��@������!��#�"#!����	:�?������/���@������ @c@�`@���ߞ�0P��_� �@z���
�v����zh�74 ��]K�ޘۙ
!X4Q�GM�4'5����ť*�Ƿ�a�),���j�Cˎ)G��l�́M���C���u�򶻠1`0 _��r���!GZ:�9'K*�@������K �wS)*��`��Xe�y�S����S����~_)�Bc_$�*����']�@e�!��B�SP�ލc����+ )�d/|8�#S Q����4.�9����#(w���xX�kو��K�Hx��b��_qyk�L�VWS�g�Al���/i��I����xʐ�X���ɰUK;��mW�nb6[�p�T�3���#J�WG��zF��bp�����AG�+`7"��/���s���?1˹���뚰F�@���T!��e5#Ơ�}���?wDzY��;�	&�1��/[3	3Y鯄����暫�w?8���4�眮�(ߦz(r��캧C��'S�;��ڨ��L�b��(���'?����j���p�u(t�6H#�s�z������Y8�7KY%ma���M��?0���?�S�9��U���V��������1r�4S�9�.��i�rp��钏�0/��Ąж"�A��9�zc ���U�r��F�o�|xSn�h8��p�i=6��	뼝�.���'d�� ��'��6��E#�H4N���1�6���5�y��3 ��E��C��u���~#?���ğz��)��aÍ��,;lMe�O��c���:��̈Rj�;��^����*��!����� ��u���Ԧy��^�����ν �"�ugJ���R��s@��ڵ�����D ���� �u��ox3@� �P�R�Nx��9wV����$���`��JO�ݡk}����L6E������/�161��5\���5vS�-T�!f�R��M2h��D�&������j�Ң�$w��`i_k�kV����2�?�P׶�{I���f��|}v^�hf� ��,���S�%���B���=���j�R��{5 ��+��8��UG�Eŋ{��!���d�xi���� #��jͱ��X�Hq��]��H4S/�ׯ5M ����aE�Ъ�_(�`�ED�С�����R�MvMhx������8;|+8�*G�1�b;��R?��m>�Z�؜�J������9��Nﴟ�Tg�Scq졔vhL+5X�rZRZ�8)h�������l�����m��}�X���"cU���%!'W�Iz�dn�� ��Ѱ������xՇH�������H�d���ꄽ���_j$� |(:���^�|J�A��2A9�k�}D_?�]��>�2�I�\�y"T�ݜ$A��� �� ��K+�q*
��w�K���D��5�m��f��u7F����Ѻ\1*�͚]k
�N���m�;[ےw��� |�d��<�7kg��D�����'niV�Y�US__'v)�N��Q�]�}l��6ѐ�b��2qU�ً�}�6EԺ���ǀ�a�'o��rĐ`S�f2��P�q�u���B�P����|͎,a�7
wQ�g��րw>�;;Ɨ���ʹD�-�_)��>�|^E����b~��H}�P0+�qr��D�Ճ�0�i����}/�ܰ���px]����o��w��I����	 �:�bO;F���B#�p` u?����s�BS�C���3v�A����`���fY����#�</�E�x��~�[��A�cWi�~:ey��ԃ6���f�t�㪺������`aO��%C@z�1��o�{w�Qyډ.	~l�T�uf�^:��y��!����r���{��*a-�������2���~��r;�7��y���pS=�f]��^\���J�ǒ-3�g�VW�Ҋ��	p൰F0wd39.�'<c�5�)P����,�
�x\�%�;�J�{ȒcO�&�+(L>��qy^�6S���亏�7-[��= a�ȵ�\�9|�|ؿ�x�B���C�:�]��y�諒�\|;�m��������5��D*@68&Q������X]�\|����K~*��������%��ʦ�	 [��;Vݬʾ�@`�u�G%�T�_�j
ˏ]U��;�2��;��_�dMe�u?�o����6 �/T	����H�I�I�����K�l�u���i�O��S�$Wu��AՋn8u&�KT��Cc���(�j��������G4��w'25i0��*��ڞ�9������0�'��[�!��Z����S^��u��~�W��|�a�<f=Te��jim�e ���&�z�z��S���آ]O�v�v2\��4	��n���3�$寱�UDr�6�9,2��:�䩩-��}\�g���w���F����z�&U�܉��'.QPG9��ۃ�o]��*����ڜ��U�W.����5C'����z����:���0�65�d?�t��o�bKزT���[i-A�EKY��v{�h+�y$�*B��T��$b���g=�p���Xl#���/�I�����x��� ��#]\nK.�,�O*v��ʆ��	ͅ"z
<�t��2��	��{�FZ��Ʃ��)�Y�W�T����������I���uGD��	�wN_���
�~���P�|�-_c��~|F��|��Ň�J�ُQ��uɂ�\N�Y����g�	޸��+<���C�2��5q����r,�d�S*_�f}O6�@��y�짧�{�G7�M��xSE� ��_B�t%w��Da����)L��2da0B/X�b_F�,yDp�7��>�Z-���F6�0YKԣBa~>KR��,�	;��j���B;-"��������g��yB;1k��\V	�NO��7}�׍`��E7�������X���-(���߅�;ʫS��V^x�͚�5�m��('�0ʁB��k3ե�#-�E�ƃ�Q�,�".zVP �.�z����IW������MMXG��5C�Tu[8���MK�]UR�Y�Y��dmD�������ǘ�ڿ|��o*��N%tU���E&�s0�r�:*�{�[�R��L��LPPZ���@�w��0��ؒ%Y�POYQٗ�N�C>����^ۘ�r��e�(��؂M�Y������~��R��'�h8)�ø�Е��'uѮ\�Ɋ���H��*N��^�;���9�؉��ݧ��|�O��_�(����m�T����jo���Z��;�4,��]0���Dk��j���/*�hÉ("S��EFU&�5�Ҩڣ+��}��
i�|/�����Uit�{{���ߎ�G��qr�{�}�z�����R�����?��e�l!@���>W U�o��Pb$�����ҵo�	�,����"�)8�����%������W"��c�!�z���_��Q���~3�S�;��j����4jl�����IS�Nf��t�7�h
�V�L���o��r�/���XE��Ջ֟:1XD(����#�H�3Qm��$���nq�ٷ��3����&�|�(�֔Y���^$^�t��{���+b6���d��}.;�+�tw��\��d��Ih�i}��Mxw�6l0_?X�� x�W��'��E��Y���hf�#Sj9R��pc�N�
j��0�h��E�BJ�
��[�U��U�w�'TŲ/�k�B��H��������c�>O���:��~��r$�q���s`�>t&7鮽�G�����N}������o��ڑJ�
�i��9�@�o�E��k-��~j�0R<��Wptƴ�>O*���A�pn��P:3�|��
�ս�!-����/ί"Թ@b�AV�ю��
��h����]���Ҫc-�t�zV�tI<NFZ�sW���	\��:R0'^���ȼ��q$�2E�v�g(3�ΐ���5b�����c��B��]�� ,z�317��p`���C���o��&;^����~K����m�n���RMa*�C�ox��rE�d���gF����M���U��3�E��'ZAM8��C����Z����@�qA����X�1,)��P<���R��L�%FYh!�C�+����vxg{����ly��6�"��.��?%���]F�
ci�i5��M�>�dۦi&���9tm��Xֆ��Rݫ���(�.z&��VlH+�6O��0XW��d+Z.�Zk�nK\F�7���S	�-�h\ѝ�w$���:���t\���F8���a=�?I�?��kBv+I>~K1m?g!#��H�V}��~�L���s,	m�2���:L6ꃥ�Xy���/���L��9�K���,ձU�!�Ҫ'ކ()��t��Rh�5���t��U�R�D�m�F�b]Xy��ނ����A'�x�ܛ5��b�~���7*?(��a�.RQ7�^����9��f�p|rx��4Ͼ����}b�k��0��I��|����^�Q�2)g�ka��^������?�g�;8r̀U`�-Pѝ�
�I�������7f�e��g�H?��5��CZ0��P9���?�߃�2qjq�����U"U��Ì�Z���j�ǻ��<���q�)1�+�2$Mr���p
�3�
HV�E���j4��e�(�D� o�7�I,_��]�ldW��W�x�;���j����)�M��> �V��×�Ί�����$a���k��ƯN%%�;���+�a�u�w��R�S:���n�x/�Xg����"�Z��P�L��aO�����R�\�?���IQH?Cq~�Ϩ�%ڸ�2�_�2�	����L�|�P�D/O�
v����0iz�Q�/��q��钰����9 �ڸ��L��^X�Ԗ�kN/n��H�J^�'ҹ��
��;�#���;��L���������-L����f���Vu�$�O
��vj �g�Y�*�Y����E!M�b���]��6tϲ���x^uu��}z�qPo��ؓE�=��!�zˣ7s*G7�(o�!��#Sw/�c�.���&cN`���&�|SL_���*�V		�la�[�^ �%��okY;ù6�h����%:��=yO1�CnJ�4�}&��x�����:�?�kv|%�,<���9�Me��H��Rk�h ��Yg[ӘQR��SL) *h�Pc-��\�p�Q��²��mr�T�Nȏ8��&	hpH!Hvǒ��f<ʿ�<���D�a�+�Y�����d�k�n�ߠ��a��aJ��\�iB�$_g�_��Y��/����YxP���̋��r2c�w������xjM�)�W�[���9F?�_�k
����ad_�8r�������x��˦;�W���Ŏ�d!�>Fܙ�]�Z��B$�hr3v�s�P��v����H{J���N&Cb�g��A��p[}ԃͶ������-�2c�ڼc��\ŝ�w͡���%T�v|)3�����7�A����8�sI0��D6��<��14S���_���T�
+�*t��g��~b���^�G�k_A"J��QlZ�5:m�l؊�.v�D�ޓ��w�L��������
p�o�����X�I�4�2����+\���&ˊ.6�`��E��EG�}E �E�p�bcZ���)S�8��bvz�{nw�ȕk�i���ϩ��B�.�8؍�'G��`��t�
O:���w�O�##���
��f�kk��d*���N���YȐ�Ә�x蚩W�:S�UV�ܚ�������X�G0.�R�}mu�G4��IՕ$���M���n+��7�u�x�Vn={Z��+���e�	��W��/U|��e�`޹>y�&�kФ��9��
��vY=rw1�Rm?�_����p�n�N�v��_�L�*�7ew��y���,ju:��:5�+�ѸML8�v�TF���Jz�ݪ,Pޯ3�׹�yS2[��6d7 7�4��@'�D��HrD6 :���xݬ(�
ח-��	`�`�����^��0q1P��������x�q�8�7~�=�J��Mk�ͷ:��vvY��\םw�!��[:^��DcE�c¢�f���R\ȟ[�7Y�Kr �C�Xs:)s! ��!���$Av���è^�t�qfw��˃���Δʎ��X��+-�7���m��&�
&��\��� ���l��.z"�(psx>�M��sX�^\�e!�Ǹ֮�U.��g�ᥓ�|��W�Q�Q=�K��ۿp|�5⾶��8���Zs����Rn4�oe M���K��4�s$��6�f��>��HX�d�X��O�/��1��+L�Z>uqkp�%�[�W�ؑ�8y�̿�7��B�����w�)\��Ps��!:��3�~w��ÿ`�!M�� );Q%м��Q�Yn)y��9{aX[�ɳT�W�At��~a&w�R���޶�׎��'�T���*>=/I�L�u>Y3���L�M�����U���m�!V�%v��!��s}��p�Kq^z�5�hN�����oI�I��K���W@Y�&u1.�*Lේ�[_���1�
҃%[N��|,S��̌�j�w���s���D�'���*1쌃C-��
UR�ȟ��N�x�b`
�MDջ�Br5s�F�d����J�F�!V�%+�\9;I��XKګ��Q��XB뀩����aѱ	~9j�2��%-�j�������"=z�b@?�ϚOP���5�EI&~:x�E'7
E34� �;L7j?��fy�9�ǐڿ�G/K9.����m�N���:z�t���ꇢ�v���"]�{e���ت�q�z* ���h ��-���1�^�֗��S˺��e�L���g�3�v�Y����!6ł[�/�L��.�iW�<s3�Xv�b�$#CS����I��5	��Y�ۈ#���G5g0�E۟�1iP�t�{������n�K���rT�T����5|T:���0@10�E�)���/�#���:�kgY�Aj��d�5��n+�C+ )64�B��f޾��U�Ϻ��B����V���LR����2��W�B��2��F��ek	�Q/����6hfɇ�5+�Oz�Ƣ;��6uL� N��
��Τ��i��m�Q�����!��*=��w��c�ܼz�Us�@�q�M��S3S�LaJZ�A�x���K�%������`^��Jq�h���� �8���n�[45��	��H���v�b�,�A�z���hCR��;-_��y@3��d��hD���>�c��+�:u7�Wd��xH�/�+��Q��&/Ч��w-G]��P�~n�jU%]����C�����%�k�Q����j�1�(�E6TyKh�Xpk6��i i87��CW�?齐�QGbϦ�����������'c��Y�=����+��|\����xRCwX�4Tg��</w]�w��o�c��@�~���࿻4Ո�E xWY��f�~���קKC�Ν�9�P/�|.;�^ʾ}���Ddԕ��c��͆VHq�x�y�֤g�|�&z�%�?w��X��~si��M���*�w�-�U��vzkS�;��b�v`Q��tW���|�1o;��*"V#M��	t]�/k0��ϵ�i�0!`&U�0=�_���%�w��JJZ����L�f�����8M>�������B���@���{�+�x����}F�FW�.�?��Zfq�9(�=?Q���Z�ԉ�,�|xf뇬�r{����pݡ��/�:����k��G{�4릯C!����n$�$ב;"��	��}�	�v7f�;U��!,�kV�ȧ�ot��]��C\��ܰ�V��yC8;E�S��x�hߖN�w�e��[�{���o�c4d���i�B7s��3c�:z��F)<��י��f�vʇq-G������ʫ��c2�~�(�ה�;&�䐉���::�skҝ!��Q���4g;��঩�LT߬������l��S�/i�5U���y숵=g�(Lr�
�73�L��Si����ޱ��R�舼z��V�,���L|6�^؆�љ¿��q�n�Y��6�����/�R���p=w�MK�KWn�A����k�iy�����*��KI*fX�SaS��$.�[�a����a�~���(Z�W �J��L�h���3}�Ez���72��W@���;�������{:3Ӡ�X4O㇞ݙx�_φݎ����l�_RhW\\��2n�I0��>�T����
�d�K�R�G
�`�T骍�'Jz|����b/Z�~�T�����`n���pH�n������z�7o�.�l�3,�蝉[�|0����E�����Qe���/H>�\�.S	-q,�������V-qP�d)wG���ubKI�g%I1lD�qyOx���^��C.~&��?��^���y��`�Y�W�/����R�\A4�CF_a�[䎔�'��� ��Kh�9�e�鿑Nl'<߽߷Z2Y�����!k,k��!�t���l�� J�d)�0�6T�x:���s��)����Z�OnZ���.L/�'I����Sp���"�|!��L?�-څbom|WK�z�n=���'�k,��S�i����Z/^���}�t"@�푐U^��z��bŏ�g4������`�����.[Q�+��bU�/������ ��`[-��)u-���ʯ?��"�>��H5*������905��#�#�k��n7"^2M/�&3�l��F�6F8Ł�bJBE�~p*�H2G���q�����槊]A�K
�@�0p�؊PZ�]ֳTA��
���z[���}�>�x~!��n�]S�,��R&n�=��6}�43�؂i�9�E�S�4�2��-�W yw��q<3lͪ��?�u����ql�]6�[ďV*p�a��3M<�
�
�j���ކ���[��ߨ��o�����RG��3t,�ٰ
�j�Ce�׿!��ѕ��Ҡi�n�$j�R��Nț�/(��*z2�FӦ��������:ԉ.?4<�l�(��w�`��Fd���M���ݲ������0�9	�(Y	d�;܋X��{�޻^���:��b6<��5X���>)7٠۽Ġ�
<"h;�<4.L�k�\�u�\j_�e��ʀ���'@7Җ����ҹOoq<Aړ���'���]!6i�p,1���/������*V���N&��I:G�9�C��G>K.���Õ���k��^�Dr*�U-+����-5u�tue|Zf��[?>��l3��۝P37��jg�~�kk�W�ͮ�W06j��U|i���m�\�i<<�~�m3���`N%�>�B5§ �$�+���u���Y�b���1���.�G���d���#���9��j����곜n�~��y5zx:3IR�D��h2��ɪ8��μ)�3����V��K|h2�W��R������c��c�TwU&���ִaG��UC��D?],���8z`!�o�*��� ]�sB�>/J�WZY����Pt�qP�)�*`�낹od�\N�qC� �$>>Z�l�
�"��;tϟ~`�! h��zT�@�+R$V-_�Y��h�@ ��~N�>��z�;/���@�6[z�����)=ve=���N4��Cg��������1�CӦ�~?]J��>����f�d=�mh� ϸ�N"������<�?�b^��?�~�DE��Y���u�D2qf�����>��<��������Ņ�&��-+�ޤi�
]jI�yl��9�~�퉕��l�5BR�����\gN��B��΋8
�#5R��U���uiw�D˵t�A:R	残�^�.�J�{o8jh�s2#���t�Q��J	)���c	�m��F�
{x�+�d��l7����W[�Ɩqɇ�{�^pZ<�l�z���)�������Ŵ,QS��B���b��U;l^4շpB�C���?���:7r����5PS���u���]��� a8��?8���|W~8��¦y��ͫ ��̶�?(��" �yɚ�a��)ح/M�鋤��;O�i���_
t��p��O���GC�%8�M�+��3�r�9�*0��63D��|R��G�L�k�Xd�#��&"?O�_!\���[����_z&�|F�--[�ƺ�B��~�NN�>b+]�'���S:"�a���ml���R�
�H�����;��G�q7�І�M�� 7�v|�����Lt�ʔ�Fe2�i� �"yQG�G��t�+�b)i�%8C�^N����ϑ߃�E�BF??[�L3�S�J���$�ۄ�@��MWg�<tX����8���W������܎X�uu5���͍�hZ^��\�G^t�ݻi��-WG��E��ߙ6����r@���y�WZ�&��D�m��E����l�IU�ѮC�Q�[D�q�؅C:V��������F:.�y9�"��"˹�@����	{N�G�5<eS�>���.R�j�d�yy	�	\���^��E"K�	�gX�{�>�q�����'Y�:ZL��ǌQ|UW���ՙ�&�*�>n�Imw˱�p�v���$���xުO���0{wL���.�TL�8�I�n�l�bJ�`�K��\��-�Wɰ����cpg���8<�j}�U��t�x�mx�~v���*�A^�gf3֝����rSݬ|��6*I>���:�ܲq�B�/���k)��$��R����X}�?�]�Sȇ>xR�?�3l[)�)�o������"2�}<�TAYV%�����$e��@�� :�@Y�m���ͩC<)�����+..h�}�]1�8�$��[���K�ׇDy�<�h8jЬ�17�S?1�?/��\�צ�l��xFz�Z�.T���%�*���myE�:LS�*"=�S8�t�BuQl�P_8O{[����Ν霹���WM,�~�����QBK+��ShM?����)��M[�C��@8¡8�K��)�[�H��ǭ&�qR?v��b
"=����VTH���o��4�����>��Eϭ��lߋ�5�δk(9R��%_�v��ye�	�%"1�tR��1���V@GۅH����V}6�G��S�������lE��-�A��K�vN]����Ewg�\�7���Ê:ߢ~�����;��uT�2�X;�ⷀ���c�պL0t�띿%��7�H����
�/Z�@�A����;4$�y�o�jR���}���lk^�Q����YK,L��/�VeJ���jpΧBk�1o���*^���fV1J��@~�c��q��g��i͌z���W�-���i]���3�	��p��H��Y:Xq�.�j�ٴT����:f��[�t�������9��
 9��Z����YD�1%%�0Z�U�#��}���ϻh�S5�K@��:������8�����j���T�� R��޸��!��:&)UU	ܿ8���*x����B�z${����Z�4ޗ1�e�k>����rD�~y�~���� �;� Gg�����篳�������L��C��%p��xRr��uT U���ս�A�˼@ǯK���/�p:;�L��*�(BvAd��,�1�6���ǒ���{��ɩ�������f�J�Ԣz�zl%��!�h��a{��R�=H6f���S9?qǋr-���=����gd�$���T���W\o�φ�L�$�a�I���U�<�mU�F5��:�����|�����D��G�UW�7-���
.3�O$��׫0�|����%��פêXț��l�	D���<֠��ͣk�l=K�k��
[51�X�]��P��=�&m�ݙ���{ANi��+��D���R�4�w��׎5��5տ�5ㇳd�*���^��0.�i�_�[y�2�k)�n3@�ɉ@�QM����(�{�Rz���I�@jñW��V>E�s��P�L�D�doN[>/����1L�����t�&!ռ��S��x:DN���%�Ft�!Z)�\��<��$�y��"��,�#�]��c��N�]y��~y��7vU׎�/�җ����';�7���y[q#��r9���ި1��sӡ*\��S��BgH����\d��jM�*`.g�(�=��-_�hX����@C������z_sжq}Ro�T�ڄ�*�	-� �h�i~��H�c��b���ӛӍ����'���1�[Fz}��
n�FǙN��ݟ��@|���܆����Boe��^��v2��,��;�!	�MSi�iS�jwd#�@>�)�1K?��^'P��� p�)+Oa���8�t�OOe�A;�}ԡ����@�Ж�%���R&�%3��f����-��fw#������q|�R~���1��,8Tٞ���q�Q�0�9dC�����e�_�TՓ���	��ƽO9fe��>�y?INk�T'P�E�=�BjJg���~��5-^�/vmb�Ȇ�Y��뗓����A��D�G/�V
>��=d��8�4�|���!�ͬ� �wX�Wh���fț�ď_5/������G�G�:�4=8	�́�خ��9�B8�7�A�De�n �u���/��ھ,{��G�B� `UO��q3���H�f͈m���l�6F�\�7��`���G��U���[��B+:�oI��ed��5'���K�ŀ}�w�\+nn��u^�u5}�{��T��_�N1�䪣�"Nį��½E��6H��3��FŪ'���7']r�g�8ؒ.���2(�\�}s���U;�q�Y2����3lr��E�MO�l�]���&P*�A��Ve����-��8�	���5�Gq%��z�Ʈ�f��U����3���(9��Q>~�A���9u�(ʓ��r����/L=�ql�
�	����"��@�]��^,�Te�a����2
�v��1�8�	��$68������@N~9���ϟhW��U�SZ�%4��{�R$x=���5
r�V��`?��a��ݍf�������|��&�G�CD�'�̭:c���ںky�hF/&#-���b��	I�|�Z+=��0���%mwJ�x(ݵ��r�<�m��V8��%w��UC`�,�3y={�׵����J�9q�c,�q.x�D[�j�h���O��lJX/&��.�nf;Q�� ^O�0�����H��P��(g~0�e¶Ѡ�ÿM���a�1([.2Eʱ�k����ÓXe^v2���Bm�`�����b��G����K闧s��;�����4Ul0�sw���5T�ee���� ��#�|�	Yv��\O��������>���&���;'t��z҇�!����.��,����u�;��o�������]}ߨ�����g��;��n}s��t�fy�R���5�R��vˣ�?���mXϋ�����$��v�9eC�����P�T?H�aږ��/��~=��^&H�۞t�3��OJ�Aiz|Y�u�2�.w�����l�4}Cڀ�+F�/�*2 ���1l��4��!�ػ��1�Û�^rj'��c�}q�[,�C��5�?Z�7�M=��<��]	�z�Z^����t���Y�l��1<��t���]!�kIC=����͛�B-����1�v1�l\9�	�[o��R�xlAM2.{�x�5mO���t���'+�����}k��M��`�@�T���ڋ�ӗz�	q�+�xgO1�#K���nSV����A��:i��6�'�� �� oŊt�o�bg{�2I��t�`� wV�JH9ьnu$�v�Ϊ8�T�K����I�i⫬ʺ���5x)���Ŕ�� /���J�Pz!s+d}4]zI<�4�K1z��ئ�M]�s^V�ܱX��$|)��H��T 7��{�B�5{���l�)B�d�0����ou���=�B!���d2�=�3�����-���p�퍪l��T2�{�r��_��
ǯ�WXǋ%]Va����,��7قwo���?38M0ҿ�zn>`2��� ��F-�)'~�Gs��{��͋݃P�~��ci�@�I9��>׼��2���bҽ`�3�L���+���Ι�a��X~�I�/R{@�����^=�T�3}�b�y׾�3��Z�����>�����	ʒ
����u��F�|@��c��
�mփD��H�ZN�`B8!&M�JY�x+�$�J'C~��R�J�����)*�p�����qX�N��Clլ>��U�]���� [��$�֓�D&1(&%6��f?�9��+����T7��2�O�4J�`�<�`���iB,����9�6�ef�����g�����C������1������w*!*^ E.-vo���[�z>:���>��*��j����<p�ELg���a4� ���n)(�M]T��S^jj�նS��]Q݉!�i7�ʵ�ՆCR�\��2��B~�]��?��tjͬ�N��<�ڽ�|�T��ET�k~ XkU��˰��U��+�-�|�H���֦�=au9x%#K�h�zEz!�<(�sUR4�)40�Q����b�X��L�b�Iv9�#CM�oP[�7���X";��=����>���}��E�V"�&�l{�[Jya���qn>u/�s�vk�R�a�	>V�3N�]�*�ǔŉa�Z�ι�©�P8����0�2�T��@u�T`�P»��	A�P�z�G��S��Ф,	�Wt������[�jrY0����G�ح�pi�5K�5��oP�gG��X/RSjM�#?����s1Lwk�̴�\��K��)�sS��+R)}Kڙgw��kK|$lt�FP{z_$ 7N�Hp$�Т���wN/C�'���!	k2j�w���$ �Y����c����V?	�^����ʹ��K@�r�*�������)���:��Xdz����N�)��8�����t��y��8l��y$MR��Oh�)��]2�A6u�s��@�w��7��ޯ�E�{�U�W݊�@K��$5.�� ��O�ƛK��=B�A�Uô��h �)�!�:���{�~]�L��pD ���(���%�Jx����\��N����v����i��M�ːX)Cf?��Ȥ'�k3����gE��ʰ{�x�����ndT���G��-Ӏ&��ڈP��Y!�ˢqgA.��{9����c	D:�_�Sm��=��Í��ճ��Ӹ��	l�OxX��������� ,0.��(회T��[��� e�Z����b�@>)g�K�6�Hr��nß���,�������Nyx���	ҙM�����Z<�`����7�*�f:�o�
�"o��+��J�!�o�B���k�~�WZ_\�3��KͺTmT&?���@�����O,��Q�{�Rx1h�3�;;�&�8=�gGB;���V�+����ک�GG�A2�ˣkG�H m\��c� 	�aF	5ت{B.�Tˑ[2��a�Ȥ�U(T���P*U(��ΐqw���)8$�#���qA��曠�A�RW�7	S����@�R�CGU�� /�k��]8���)����u4��uj��:�VG�C/�<���C���������g�/-�a��[E��� �g��D��z����v�y˳��$�>�I�����q%K"���>��~�t��e+��0~۹k�!�G���o,�Lɴ�c��}z럪���V�erR��W� ���l=���U�����y1ߔ���NL�ZuXY���;������>�z�_XG6q��Q"x�E���*���Ӯ��������D���R��\ܰ9t�9�H�$�7g\ݺ�C�u[{&J�4��rRI.L�m�A���i;*fK펕\!+��4���˕6T`��X��;}�^(l�~�־� �2V_��l: )^�����J���|g��syOr#�\^���ѻ�Oۜ!<������r�A������x��^lpDcp*�p���J��JY_�uƅ��7��ޭIΑ�S��l<��� �M7�qX-�~��:8�bk�t���W�xs"�D�R�����[�e���4��2���r�E:��V_{�W�Mj��l��d|wa�@=�Y�+r٩�8�#����On�M5���+,Y�2��q��m��M�����$ZDHU��@z�F�m�NA���.�7Ҧ����K�aCٜ�� ��w%B�;M���Z�A2�X�]���גN�t���ށdJ=�p�Pӓq�P���w���-�����a����R�r�Sػ2���,�M4�
�]�I �H�h��Y.V'���w+���<�X�Zխ�!������ľ����� ��Vௌ�>N�à�)_gp���<�xYIxr[i+u#COR�	z;0o$�;&ƒPl��(���n��=�@��f��+���WUL�)�F��#��m4�/kp-�VC\���+1t�=�Z۷��/0^�7�H�bX)?�W;2)���C��Ɩ8��[�3�ב�u��?��<���/C�Vp�_������F�}��WYz�F1�F9��vK%��U�6�M"1 ~���D�CW��1���c��])�]��O#� -���~#dÓ$H�m�K���S딹��N��$i̓�̞Dk����FZ��"�}!�o�8s���c�N��\�{ם�.��l�1��K��O���v@䱳q��-��[��ڼ�f���i�3^9>���.��C?�+�C�$��Xח�b�qU~Ƨ�=�U���k:�$�J��jס3�/�R�j���R�m:iU$���i}5�d�uYKX����X�����p#3�ÀJ��t� ����N&D@��j�i2��2~w�	�#���6CL-�Q��ߔ�@��{C?���̅F�0�g�L�a�Y�7�_O�Q^Zo�&�W��A���8��!O�
����5�����$\�����F٥�m�A���VgbǦ�xy�3��-26�r����:V.��b�Hǹ�G��ڋ�F�G��-Y:�F�h0%�!aFl��� �oJh�l�>{�×�#�0���Z�i��W�c��oj��@tp��>Ew�:�H�B�B�E�a�7[��P�1l�������v��g<!�R��3 �mV�?�.�b|�;8�	׭ ͞$��������Y��T ��t�����o��Fi܆^7!��'KI��G
jۺj/^���7N�6�G��9�μ&$+X!�����G����2�����f���Nr.F�a`]��;�-��ꢦ'�}�7��&а̱�^ �;�[
�z�i<-���R\yHZP�Fn{j7�t~�V�+�d�m��Ia7N����9���%�0sr)�?
(ؠ���kw�KS;�T�&4Y�X��")�$tҍԷ�q�h��d��y\W�I�(\U�S��Sv�ac�u���M#*��a��c|��z5����:y����W����[���������ڭ)J��qP7�2�Z���_�����P����,�����OC�@Z�su��TR����r� �7]��l�\�W�٬z�a\�.(�Pӓ��L���F^ػrQ�),Txm�#�l��~Be���W&IT�umM�����;KK߃K6��Sr��(�ݐާ�Z�;��8���9��1�dɺW����1JZ�� �L���#�v�h=����N_^S��,CD\(��J[���&�8��NIr1̱JQ����cm�v�j�"��y�%�Y���N��X���A�>M!�	ֆ�-�%���Xd����,=)��jM���IWG��Z��J
12���Jߣt�W&.0)(`~�Z�c����BE�c�z�g��%��z��:��r���#�Q�M ���7Z��Y/��a�,27kG�);�g����1_&[!]���/��K#��p���&��~Ɍhsr�y��&�A7���,ո2��蒵L���?#��<YJ�H��P�騨�t�_�D������f�B};��t�7���E,�7J��vf��a�9w��KWZ�W �ہ���ĲZ��ƴh���D��9�S#\"�j�m��ְ��aƇwW=oM�`�u�O�9H�����(�do*z�/��V�Ws������;�1;��d�F��.�#oֺ��p:$�3��9.
X�!nfO$,�,u֯�b�H� ���3Z)b;����aX��C�2�
��^���Qo�<a|�+"R�{�'�K������8�ՙ�Y.M��  � �S&,���!�/��4U��||,y0'�����:��ת];[�2�\@G��FRƁB����Ut��R=�p}#���P×��DeC~;�~�°�W�	�x��9�`C�;@�s)����.�QY��)x>���|�P�L�JUSҼ�f����J!�+_��,����붆�.��3�D{'%��@YGAQ�d����@��{k�CwH��d���o1c�@j���.� ������j�F]U��ː����?� ��@NC�%��5���4j�|
h���r�A xq�y&-`ͨ�������8~���C��8�d0GU���[����rM���W����9>=���r���������������^�p�Ll����f�d�(� ��im�zν�Y�7̳1�x�H�c��+k٩Gϓs�8yG"v9��h���k:���6 	������Y��H�0_XeD\��GKҷ�
��%��X��7ܗ�
Q����|dm$�����+ː-ʃ��s��QƠWX�l����1�}*�����q���+\2�� m�ZYYʠ;P�;ԕ7+�Y���Ѥ+�=m_]S�U��;�O¾!��q#?!�#	��[�jf��?��x��?[p6��W����Xi��*�n5"���~�K1��^�"C� +��<�e���c!]�W,�J��*���?��֛1�_.�~M�8�&Ɔ��
�թ_V�F�{�0�Rg�Y��vW���F��S��σ���N��>Zy�ܠ`HP��႑��O�,�|�&C���I���k����z�(kW��_��e����lGa���OU��W|����l}g���^��Qs<�+Ȗ���m� *��Z��ߩ�_!�;%d
�<�T�-E�iZ�d�Z�� ���C+L�R]��J_<4�7�iʴ� 5���g~5�d&䋑Y}�Z��Z��?`��U�^����ʵ���ŋ6NLf��=�e�wzZ*!������.C��7�j}vʳ���g��ԏ?'�]�	@:�Lz_]�-�V�<�~A4��$h����[S��:)����:��Vf�Z�-pE��7R_��4���6~&7��r�X��ojG���Q6X�9�!&FP�-^o����6c`��3�ֲ�ۺ	H��.Q�_gJCNŦK*���Άe�]Pt�HG�O ���cc��Qn��V�F�G��M��ܗ�6�w+F���x�Y^�l�1��o!���eb���Op��IT��l���BY�O�WrY�&O�L
�������4W�o5xy��ʂ� ��t;� J,q�>`$m���Z�g&TȀG&�oۿoJ�h���,�	;܅��2l��9o�l����T�������l�3'�<�p�A�$��6�K��l�E�Pe�	NvC���Y%b�����y�!B�w����'�7DQ�L�x�q��	�S5b݋+(�3��cc��f��=̙#E	`?�}k�V§�y�!fR��-�-F�A�E�|��I%���\nS�@ۀ�4mX8a�=�K,v�=/YZ�YRM��o3��89FXe��PѪ0,�R��F(��^A* TZ�p-ڭ��K+~�U���ԌmF'Qj�{'�uS��c4�/��� ���;���?��XD���*:�Ud��-��O�q�<>&.4#d� ��ڇ���y�����&,,�M�jקeO��7���J��49���:J�;��r��2�Y2��8����ڋJ����^�k��\y��|D2��.��RXt��e�pe+~�M���9�9oHߌ�Dz鷵F�+�����y��d�x�*���w�ck�����g�t'�� ǟȬ2��NO�&r�W��o�J��A��c����������-q*�U'Q^2���e�9¡�,��N� �Bn�/Z6Q��*�����Z�߀��/%&��A��u�j���$��x��ɹ�F�3����/+ 7�|1u355^�^@�d�s�偐�J�@}��)�u$J݆��O�2yDQ�l��}iܺ5�ص�!^2Y�����%�!=*��!?�1,\Ѭ�31�OZ�ѧ��w�W�r���@���Z��jXOh2� ����a�*��e�-WSm.M_�wX�f� ������'����H]qM������h����p���e\�,�X1^V����7�l֯`�r�9,��>+�,/Y�գ��Ȥ��RU�����kl��ZK�_��˓1Y@�ޔ����L���8�)���p/Ӯ�_f%�Fk��x�� �b2�]EY[�Dݛ|
�<�(�iэ��u��e���;��䝄H�׿]+�خ��^���`U@U��Y�Q�g$4����9-T���~+�|�x,xc{���v���ש��'�zҺT�~���dN�d��uk_N�뺪<{����9?�e����3�B:���mh���_��a߉�.	9�L�;�$���)\(�D���?Z8"������Ooi�m�)�f���O{��)��������gn���1׼ߟ :� X������I�1�m�}j���~<���|�����J&�	dǈݘ)+qJ���sO>�h/�<�?-��R�;+ �ҍ�Vn��U�]|(S��2��k����:�{0o����E�{��eʡcU�1�h�Vs�_��tZ�Bf��Gd"ַ�f_���N�]���9bV�C����mK�3��u�c?�CC
���e��]��ʼ���x�vW�s޵z���� �pYy朙��z���j��\�J�'7>>6>����޻>�X~vc�l���˒�Ȟu�4$I`G�a}��+8��z�U�&~o�30�Mig��Zv�MX����L�ܴ�`7u���e�J���fP� �fo��١~|��du��l�-`�RV|�r[n��J��v��Oʨ���u)[�'U2�H�e]���Uv8�V<h��;I~�u���O�\\�T.Tn�Ji$�)\�1�ڔҙ�9��l�i`����Vl�X� bC�m�u���Ã��2��ˡ��m�T�#���υ縎(�q��WAP��\��J�"7�]rY��Dx� �H\0����G���O�r�V>nT����� �z��Ek�Z+����i�U��	�n���[�o�b&4�$���z�KH�bI�ó)Ն��\��-����q�����Wؖud�9�\y� �H���4�:+x*�5��x��A��0ҹ��M��~	����Dy��)�SPYգV��9*��f� ��g^�:�闑ɇn^L�b����{[�CW/DR9d3*� iF�ҩS'�r�|{OCމŜh�Dq:"	e�gm)�V>�k����^���C��˖1����}*����tH[7��W!b<�`�M-D�{�d�T ��'|�)AQp�-ҷ���^p)�U���3��!�<Q�f�kڽ7���4j�g"�d�6L��\ =�A8Pcm��-�!�M��@k��_�ǆ��eɴ��A���Ip;ף�f���'�͂T�̶�޼��n�Zg��������7�h��	e D����b��U�N�_�f�Ov�p�[[����Yk/^�J�v���{���{'!�E��U��m�x�Pe� �SF��xj�� 2#�h�2-��4'�C}�D��|NX�13dc "K����6�����?�r�4R6�)�Ǩ��o�-4�1��2c��ҍ^�'O�*8��2E�v�U*oj��\�